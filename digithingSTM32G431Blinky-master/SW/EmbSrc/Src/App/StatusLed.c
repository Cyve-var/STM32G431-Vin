#include "StatusLed.h"
#include "../HalOut/PortOut.h"

eStatusLedState StatusLedState;

void StatusLedInit(void) {
	StatusLedState = STATUS_LED_OFF;
}

void StatusLedMain(void) {
	static unsigned short i;
	if (i++%8) {
		StatusLedState = STATUS_LED_OFF;
	}
	else {
		StatusLedState = STATUS_LED_ON;
	}
}

eStatusLedState StatusLedGetState(void) {
	return StatusLedState;
}



/*
 This function flashes the User Led on the nucleo board.
 */
