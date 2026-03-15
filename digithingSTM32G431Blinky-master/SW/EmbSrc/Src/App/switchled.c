/*
 * switchled.c
 *
 *  Created on: 13.03.2026
 *      Author: Vince
 */




#include "switchled.h"
#include "../HalIn/PortIn.h"
#include "../HalOut/PortOut.h"



eStatusSwitchState StatusSwitchState;
eLedState Led_PA9_State;
eLedState Led_PA10_State;
eLedState Led_PA12_State;
eLedState Led_PA8_State;

void StatusSwitchInit(void) {
	StatusSwitchState = STATUS_SWITCH_OFF;
}

void Led2Init(void) {
	   Led_PA9_State  = LED_OFF;
	    Led_PA10_State = LED_OFF;
	    Led_PA12_State = LED_OFF;
	    Led_PA8_State = LED_OFF;
}

void SwitchMain(void){

	// PB0 -> PA9

	Led_PA9_State = PortInGetStatePB0();


    // PB7 -> PA10
	Led_PA10_State = PortInGetStatePB7();

    // PB5 -> PA12
	Led_PA12_State = PortInGetStatePB5();

    // PB4 -> PA8
	Led_PA8_State  = PortInGetStatePB4();


}


eLedState Led_PA9_GetState(void)  {
	return Led_PA9_State;
}

eLedState Led_PA10_GetState(void) {
	return Led_PA10_State;
}
eLedState Led_PA12_GetState(void) {
	return Led_PA12_State;
}
eLedState Led_PA8_GetState(void) {
	return Led_PA8_State;
}




/*
 This function is supposed to light multiple LED's from 4 Switch Inputs
 */
