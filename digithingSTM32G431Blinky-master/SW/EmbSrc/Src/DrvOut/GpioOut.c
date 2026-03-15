#include "../Target/Target.h"
#include "../STM32G431/STM32G431_GPIOB_Def.h"
#include "../STM32G431/STM32G431_GPIOA_Def.h"
#include "../HalOut/PortOut.h"

void GpioOutPortB(void) {
	volatile sSTM32G431_GPIOB* pSTM32G431_GPIOB = (sSTM32G431_GPIOB*)GPIOB_ADR;
	uSTM32G431_GPIOB_BSRR STM32G431_GPIOB_BSRR;
/*
	ePortOutState State = PortOutGetStatePA8();

	STM32G431_GPIOB_BSRR.All = 0;
	if (PORT_OUT_PORT_HIGH == State) {
		STM32G431_GPIOB_BSRR.Bit.BS8 = 1;
	}
	else {
		STM32G431_GPIOB_BSRR.Bit.BR8 = 1;
	}
	*/
/*
	State = PortOutGetStatePB6();

	if (PORT_OUT_PORT_HIGH == State) {
		STM32G431_GPIOB_BSRR.Bit.BS6 = 1;
	}
	else {
		STM32G431_GPIOB_BSRR.Bit.BR6 = 1;
	}
*/
	pSTM32G431_GPIOB->STM32G431_GPIOB_BSRR.All = STM32G431_GPIOB_BSRR.All;

}

void GpioOutPortA(void) {
	volatile sSTM32G431_GPIOA* pSTM32G431_GPIOA = (sSTM32G431_GPIOA*)GPIOA_ADR;
	uSTM32G431_GPIOA_BSRR STM32G431_GPIOA_BSRR;

	ePortOutState State = PortOutGetStatePA8();

	STM32G431_GPIOA_BSRR.All = 0;
	if (PORT_OUT_PORT_HIGH == State) {
		STM32G431_GPIOA_BSRR.Bit.BS8 = 1;
		}
	else {
		STM32G431_GPIOA_BSRR.Bit.BR8 = 1;
		}

	// Leds from switchled
	State = PortOutGetStatePA9();

	if (PORT_OUT_PORT_HIGH == State) {
			STM32G431_GPIOA_BSRR.Bit.BS9 = 1;
			}
		else {
			STM32G431_GPIOA_BSRR.Bit.BR9 = 1;
			}

	State = PortOutGetStatePA10();

		if (PORT_OUT_PORT_HIGH == State) {
				STM32G431_GPIOA_BSRR.Bit.BS10 = 1;
				}
			else {
				STM32G431_GPIOA_BSRR.Bit.BR10 = 1;
				}

	State = PortOutGetStatePA12();

	if (PORT_OUT_PORT_HIGH == State) {
			STM32G431_GPIOA_BSRR.Bit.BS12 = 1;
			}
		else {
			STM32G431_GPIOA_BSRR.Bit.BR12 = 1;
			}

	State = PortOutGetStatePA8();

	if (PORT_OUT_PORT_HIGH == State) {
			STM32G431_GPIOA_BSRR.Bit.BS8 = 1;
			}
		else {
			STM32G431_GPIOA_BSRR.Bit.BR8 = 1;
			}

	pSTM32G431_GPIOA->STM32G431_GPIOA_BSRR.All = STM32G431_GPIOA_BSRR.All;


}


void GpioOutMain(void) {
	GpioOutPortB();
	GpioOutPortA();
}


/*
 In this function we set the Voltage of the output pins.
 BS8 means Bit Set and BR8 means Reset of Pin 8 of port B.
 We have to use the .All Union because the STM32 can only write to registers with long (4 Byte) in one step!
 You cant set Bits seperately like in the PIC Microcontrollers.
 */
