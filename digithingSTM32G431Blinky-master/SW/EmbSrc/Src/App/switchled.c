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
eLedState Led_PA9_State;    // LED 1
eLedState Led_PA10_State;  // LED 2
eLedState Led_PA12_State; // LED 3
eLedState Led_PA11_State; // LED 4

void StatusSwitchInit(void) {
	StatusSwitchState = STATUS_SWITCH_OFF;
}

void LedInit(void) {
	   Led_PA9_State  = LED_OFF;     // LED 1
	    Led_PA10_State = LED_OFF;   // LED 2
	    Led_PA12_State = LED_OFF;  // LED 3
	    Led_PA11_State = LED_OFF;  // LED 4
}

void SwitchMain(void){
	// Switch 1 -> LED 1
	// PB0 -> PA9
	Led_PA9_State = PortInGetStatePB0();

	//  Switch 2 -> LED 2
    // PB7 -> PA10
	Led_PA10_State = PortInGetStatePB7();

	// Switch 3 -> LED 3
    // PB5 -> PA12
	Led_PA12_State = PortInGetStatePB5();

	// Switch 4
    // PB4 -> PA8
	Led_PA11_State  = PortInGetStatePB4();


}

// LED 1
eLedState Led_PA9_GetState(void)  {
	return Led_PA9_State;
}

// LED 2
eLedState Led_PA10_GetState(void) {
	return Led_PA10_State;
}

// LED 3
eLedState Led_PA12_GetState(void) {
	return Led_PA12_State;
}

// LED 4
eLedState Led_PA11_GetState(void) {
	return Led_PA11_State;
}




/*
 This function is supposed to light multiple LED's from 4 Switch Inputs
 */
