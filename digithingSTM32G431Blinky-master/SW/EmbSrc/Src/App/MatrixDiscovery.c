#include "MatrixDiscovery.h"
#include "../Target/Target.h"
#include "../STM32G431/STM32G431_GPIOA_Def.h"
#include "../STM32G431/STM32G431_GPIOB_Def.h"

// Matrix Configuration based on PCB Pinout
// Outputs: PB0, PB1, PB2, PB3, PB4, PB5, PB6, PB7
// Inputs:  PA0, PA1, PA2, PA3, PA8, PA9, PA10, PA15

static const int OutputPins[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Port B
static const int InputPins[]  = {0, 1, 2, 3, 8, 9, 10, 15}; // Port A

// State to track currently pressed segments to avoid repeated reports
static unsigned char MatrixState[8][8]; 

void MatrixDiscovery_Init(void) {
    volatile sSTM32G431_GPIOB* pGPIOB = (sSTM32G431_GPIOB*)GPIOB_ADR;
    
    // Set all matrix output pins (PB0-PB7) to HIGH (idle state)
    // Using BSRR to set bits
    pGPIOB->STM32G431_GPIOB_BSRR.All = 0x00FF; // BS0 to BS7
    
    for(int r=0; r<8; r++) {
        for(int c=0; c<8; c++) {
            MatrixState[r][c] = 0;
        }
    }
}

void MatrixDiscovery_Process(void) {
    volatile sSTM32G431_GPIOB* pGPIOB = (sSTM32G431_GPIOB*)GPIOB_ADR;
    volatile sSTM32G431_GPIOA* pGPIOA = (sSTM32G431_GPIOA*)GPIOA_ADR;
    
    for (int row = 0; row < 8; row++) {
        // 1. Pull current row (Output) LOW
        // Using BRR (Bit Reset Register) to set PB[row] to 0
        pGPIOB->STM32G431_GPIOB_BRR.All = (1 << OutputPins[row]);
        
        // Small delay if needed for signal stabilization
        for(volatile int i=0; i<10; i++); 

        // 2. Read all columns (Inputs) from Port A
        unsigned long idrA = pGPIOA->STM32G431_GPIOA_IDR.All;

        for (int col = 0; col < 8; col++) {
            int pin = InputPins[col];
            // If pin is LOW, it means the segment at [row][col] is pressed
            int isPressed = !(idrA & (1 << pin));
            
            if (isPressed && !MatrixState[row][col]) {
                // HIT DETECTED!
                // Logic for reporting (e.g., setting a flag or serial output)
                // For now, we just update the state.
                MatrixState[row][col] = 1;
                
                // TODO: Replace with actual hit mapping (e.g., "Single 20", "Bullseye")
                // Serial_Printf("Hit detected: Row %d, Col %d\n", row, col);
            } 
            else if (!isPressed && MatrixState[row][col]) {
                // Released
                MatrixState[row][col] = 0;
            }
        }

        // 3. Set current row back to HIGH
        pGPIOB->STM32G431_GPIOB_BSRR.All = (1 << OutputPins[row]);
    }
}
