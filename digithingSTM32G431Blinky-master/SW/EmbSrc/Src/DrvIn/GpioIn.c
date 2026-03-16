#include "../Target/Target.h"
#include "../DrvIn/GpioIn.h"
#include "../STM32G431/STM32G431_GPIOB_Def.h"
#include "../STM32G431/STM32G431_GPIOA_Def.h"


// Switches from swichtled.c


// Switch 1
eGpioInPortState GpioInGetPortB0(void) {
	volatile sSTM32G431_GPIOB* pSTM32G431_GPIOB = (sSTM32G431_GPIOB*)(GPIOB_ADR);
	if (1 == pSTM32G431_GPIOB->STM32G431_GPIOB_IDR.Bit.IDR0) {
		return GPIO_IN_PORT_HIGH;
	}
	else {
		return GPIO_IN_PORT_LOW;
	}
}

// Switch 2
eGpioInPortState GpioInGetPortB7(void) {
	volatile sSTM32G431_GPIOB* pSTM32G431_GPIOB = (sSTM32G431_GPIOB*)(GPIOB_ADR);
	if (1 == pSTM32G431_GPIOB->STM32G431_GPIOB_IDR.Bit.IDR7) {
		return GPIO_IN_PORT_HIGH;
	}
	else {
		return GPIO_IN_PORT_LOW;
	}
}

// Switch 3
eGpioInPortState GpioInGetPortB5(void) {
	volatile sSTM32G431_GPIOB* pSTM32G431_GPIOB = (sSTM32G431_GPIOB*)(GPIOB_ADR);
	if (1 == pSTM32G431_GPIOB->STM32G431_GPIOB_IDR.Bit.IDR5) {
		return GPIO_IN_PORT_HIGH;
	}
	else {
		return GPIO_IN_PORT_LOW;
	}
}

// Switch 4
eGpioInPortState GpioInGetPortA2(void) {
	volatile sSTM32G431_GPIOA* pSTM32G431_GPIOA = (sSTM32G431_GPIOA*)(GPIOA_ADR);
	if (1 == pSTM32G431_GPIOA->STM32G431_GPIOA_IDR.Bit.IDR2) {
		return GPIO_IN_PORT_HIGH;
	}
	else {
		return GPIO_IN_PORT_LOW;
	}
}

/*
 In this function we set the Voltage of the output pins.
 BS8 means Bit Set and BR8 means Reset of Pin 8 of port B.
 We have to use the .All Union because the STM32 can only write to registers with long (4 Byte) in one step!
 You cant set Bits seperately like in the PIC Microcontrollers.
 */
