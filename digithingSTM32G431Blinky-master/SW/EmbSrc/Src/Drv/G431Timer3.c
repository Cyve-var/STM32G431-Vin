#include "../Target/Target.h"
#include "../STM32G431/STM32G431_TIM3_Def.h"
#include "G431Timer3.h"

void G431Timer3Init(void) {
	volatile sSTM32G431_TIM3* pSTM32G431_TIM3 = (sSTM32G431_TIM3*)TIM3_ADR;
	volatile uSTM32G431_TIM3_CCER STM32G431_TIM3_CCER;
	volatile uSTM32G431_TIM3_CCMR1_Output STM32G431_TIM3_CCMR1_OUTPUT;
	volatile uSTM32G431_TIM3_DIER STM32G431_TIM3_DIER;
	volatile uSTM32G431_TIM3_CR1 STM32G431_TIM3_CR1;
	volatile uSTM32G431_TIM3_ARR STM32G431_TIM3_ARR;
	volatile uSTM32G431_TIM3_CCR2 STM32G431_TIM3_CCR2;
	volatile uSTM32G431_TIM3_EGR STM32G431_TIM3_EGR;
	volatile uSTM32G431_TIM3_PSC STM32G431_TIM3_PSC;


	//  Timer Period/Pulse  conf
	STM32G431_TIM3_PSC.All = 50;
	STM32G431_TIM3_ARR.All = 211; // STM32G431 170GHz Clock 5,88 ns per tick Leds need 1250ns so: 1250/5,88= 212,6 -1
	STM32G431_TIM3_CCR2.All = 0; //Init PWM (Duty Cycle)

	// Output Control (CCER)
	STM32G431_TIM3_CCER.All = 0; // Reset Capture/Compare Enable Register
	STM32G431_TIM3_CCER.Bit.CC2P = 0; // Output Polarity
	STM32G431_TIM3_CCER.Bit.CC2E = 1; // Capture/Compare 2 Output Enable (Turn on Channel 2 pin


	// Output MODE Configuration (CCMR)
	STM32G431_TIM3_CCMR1_OUTPUT.All = 0; // Reset Mode Register
	STM32G431_TIM3_CCMR1_OUTPUT.Bit.OC2M = 6; // Output Compare 2 Mode: PWM Mode 1 (High then Low)
	STM32G431_TIM3_CCMR1_OUTPUT.Bit.OC2PE = 1; // Output Compare 2 Preload Enable (Buffer the CCR2 value)

	// Interrupt and DMA (DIER)
	STM32G431_TIM3_DIER.All = 0; // Reset DMA/Interrupt Enable Register
	STM32G431_TIM3_DIER.Bit.TDE = 1; // Trigger DMA,
	STM32G431_TIM3_DIER.Bit.CC2DE = 1;// Trigger DMA Request: Enabled
	STM32G431_TIM3_DIER.Bit.TIE = 0; // Trigger Interupt
	STM32G431_TIM3_DIER.Bit.UDE = 1; // Update DMA Enable
	STM32G431_TIM3_DIER.Bit.UIE = 0; // Update Intterrupt Disabled


	STM32G431_TIM3_EGR.All = 0;
	STM32G431_TIM3_EGR.Bit.UG = 1;

	// Control Register 1
	STM32G431_TIM3_CR1.All = 0; // Reset Control Register
	STM32G431_TIM3_CR1.Bit.CEN = 1; // Counter Enable: Start the Timer
	STM32G431_TIM3_CR1.Bit.UDIS = 0;  // Update Disable: 0
	STM32G431_TIM3_CR1.Bit.URS = 1; // Update Request Source
	STM32G431_TIM3_CR1.Bit.OPM = 0; // One-Pulse Mode: Disabled (kontinuierlich)
	STM32G431_TIM3_CR1.Bit.DIR = 1; // Direction
	STM32G431_TIM3_CR1.Bit.CMS = 0; // Edge Aligned Mode
	STM32G431_TIM3_CR1.Bit.ARPE = 1; // Auto Reload Preload Enable buffer ARR
	STM32G431_TIM3_CR1.Bit.CKD = 0; // clock dead-time division. no division


	pSTM32G431_TIM3->STM32G431_TIM3_CCER.All = STM32G431_TIM3_CCER.All;
	pSTM32G431_TIM3->STM32G431_TIM3_PSC.All = STM32G431_TIM3_PSC.All;
	pSTM32G431_TIM3->STM32G431_TIM3_ARR.All = STM32G431_TIM3_ARR.All;
	pSTM32G431_TIM3->STM32G431_TIM3_DIER.All = STM32G431_TIM3_DIER.All;
	pSTM32G431_TIM3->STM32G431_TIM3_EGR.All = STM32G431_TIM3_EGR.All;
	pSTM32G431_TIM3->STM32G431_TIM3_CCR2.All = STM32G431_TIM3_CCR2.All;
	pSTM32G431_TIM3->STM32G431_TIM3_CCMR1_Output.All = STM32G431_TIM3_CCMR1_OUTPUT.All;
	pSTM32G431_TIM3->STM32G431_TIM3_CR1.All = STM32G431_TIM3_CR1.All;





}


void G431Timer3Main(void) {
#if 1 /* Only for debug reason to find out if dma works */
	volatile sSTM32G431_TIM3* pSTM32G431_TIM3 = (sSTM32G431_TIM3*)TIM3_ADR;
	ASM("NOP");
#endif
}
