/*
 * switchled.c
 *
 *  Created on: 13.03.2026
 *      Author: Vince
 */




#include "switchled.h"
#include "../HalIn/PortIn.h"



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

	if (PORT_IN_PORT_HIGH == PortInGetStatePB0()) {
		Led_PA9_State = LED_ON;
	}
	else {
		Led_PA9_State = LED_OFF;
		}

    // PB7 -> PA10
	if (PORT_IN_PORT_HIGH == PortInGetStatePB7()) {
		Led_PA10_State = LED_ON;
	}
	else {
		Led_PA10_State = LED_OFF;
		}

    // PB5 -> PA12
	if (PORT_IN_PORT_HIGH == PortInGetStatePB5()) {
			Led_PA12_State= LED_ON;
	}
	else {
			Led_PA12_State = LED_OFF;
		}

    // PB4 -> PA8
	if (PORT_IN_PORT_HIGH == PortInGetStatePB4()) {
			Led_PA8_State = LED_ON;
	}
	else {
			Led_PA8_State = LED_OFF;
		}



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
