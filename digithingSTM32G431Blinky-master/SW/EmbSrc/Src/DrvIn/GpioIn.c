#include "../Target/Target.h"
#include "../DrvIn/GpioIn.h"
#include "../STM32G431/STM32G431_GPIOB_Def.h"
#include "../STM32G431/STM32G431_GPIOA_Def.h"


// button from button.c
eGpioInPortState GpioInGetPortB7(void) {
	volatile sSTM32G431_GPIOB* pSTM32G431_GPIOB = (sSTM32G431_GPIOB*)(GPIOB_ADR);
	if (1 == pSTM32G431_GPIOB->STM32G431_GPIOB_IDR.Bit.IDR7) {
		return GPIO_IN_PORT_HIGH;
	}
	else {
		return GPIO_IN_PORT_LOW;
	}
}

// Switches from swichtled.c

eGpioInPortState GpioInGetPortB0(void) {
	volatile sSTM32G431_GPIOB* pSTM32G431_GPIOB = (sSTM32G431_GPIOB*)(GPIOB_ADR);
	if (1 == pSTM32G431_GPIOB->STM32G431_GPIOB_IDR.Bit.IDR0) {
		return GPIO_IN_PORT_HIGH;
	}
	else {
		return GPIO_IN_PORT_LOW;
	}
}



eGpioInPortState GpioInGetPortB5(void) {
	volatile sSTM32G431_GPIOB* pSTM32G431_GPIOB = (sSTM32G431_GPIOB*)(GPIOB_ADR);
	if (1 == pSTM32G431_GPIOB->STM32G431_GPIOB_IDR.Bit.IDR5) {
		return GPIO_IN_PORT_HIGH;
	}
	else {
		return GPIO_IN_PORT_LOW;
	}
}

eGpioInPortState GpioInGetPortB4(void) {
	volatile sSTM32G431_GPIOB* pSTM32G431_GPIOB = (sSTM32G431_GPIOB*)(GPIOB_ADR);
	if (1 == pSTM32G431_GPIOB->STM32G431_GPIOB_IDR.Bit.IDR4) {
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
