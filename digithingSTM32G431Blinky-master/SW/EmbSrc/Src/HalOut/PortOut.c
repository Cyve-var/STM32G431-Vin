#include "../HalOut/PortOut.h"
// #include "../App/button.h"
// #include "../App/StatusLed.h"
#include "../App/switchled.h"
#include"../App/common.h"



// leds from switchled.c

ePortOutState PortOutGetStatePA9(void) {
	eLedState PortOutLedState =  Led_PA9_GetState();
	if (LED_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}


ePortOutState PortOutGetStatePA10(void) {
	eLedState PortOutLedState = Led_PA10_GetState();
	if (LED_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}


ePortOutState PortOutGetStatePA12(void) {
	eLedState PortOutLedState = Led_PA12_GetState();
	if (LED_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}

/*
ePortOutState PortOutGetStatePA15(void) {
	eLed2State PortOutLedState = Led_PA15_GetState();
	if (LED2_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
	}
	else {
		return PORT_OUT_PORT_LOW;
	}
}
*/
ePortOutState PortOutGetStatePA8(void) {
	eLedState PortOutLedState = Led_PA8_GetState();
	if (LED_ON == PortOutLedState) {
		return PORT_OUT_PORT_HIGH;
}
	else {
		return PORT_OUT_PORT_LOW;
	}
}


