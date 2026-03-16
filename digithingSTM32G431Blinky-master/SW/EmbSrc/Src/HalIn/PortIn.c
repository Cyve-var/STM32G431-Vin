#include "../DrvIn/GpioIn.h"
#include "../HalIn/PortIn.h"

// Switches from switchled.c
// Switch 1
ePortInState PortInGetStatePB0(void) {
	eGpioInPortState PortInStateStatusSwitch = GpioInGetPortB0();
	if (GPIO_IN_PORT_HIGH == PortInStateStatusSwitch) {
		return PORT_IN_PORT_HIGH;
}
	else {
		return PORT_IN_PORT_LOW;
	}
}

//  Switch 2
ePortInState PortInGetStatePB7(void) {
	eGpioInPortState PortInStateStatusSwitch = GpioInGetPortB7();
	if (GPIO_IN_PORT_HIGH == PortInStateStatusSwitch) {
		return PORT_IN_PORT_HIGH;
}
	else {
		return PORT_IN_PORT_LOW;
	}
}

// Switch 3
ePortInState PortInGetStatePB5(void) {
	eGpioInPortState PortInStateStatusSwitch = GpioInGetPortB5();
	if (GPIO_IN_PORT_HIGH == PortInStateStatusSwitch) {
		return PORT_IN_PORT_HIGH;
}
	else {
		return PORT_IN_PORT_LOW;
	}
}

// Switch 4
ePortInState PortInGetStatePA2(void) {
	eGpioInPortState PortInStateStatusSwitch= GpioInGetPortA2();
	if (GPIO_IN_PORT_HIGH == PortInStateStatusSwitch) {
		return PORT_IN_PORT_HIGH;
}
	else {
		return PORT_IN_PORT_LOW;
	}
}

