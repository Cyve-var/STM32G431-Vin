#include "../HalOut/PortOut.h"
// #include "../App/StatusLed.h"
#include "../App/switchled.h"
#include"../App/common.h"



// leds from switchled.c

// LED 1
ePortOutState PortOutGetStatePA9(void) {
	eLedState PortOutLedState =  Led_PA9_GetState();
	if (LED_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}

// LED 2
ePortOutState PortOutGetStatePA10(void) {
	eLedState PortOutLedState = Led_PA10_GetState();
	if (LED_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}

// LED 3
ePortOutState PortOutGetStatePA12(void) {
	eLedState PortOutLedState = Led_PA12_GetState();
	if (LED_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}

// LED 4
ePortOutState PortOutGetStatePA11(void) {
	eLedState PortOutLedState = Led_PA11_GetState();
	if (LED_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
}
	else {
		return PORT_OUT_PORT_LOW;
	}
}

