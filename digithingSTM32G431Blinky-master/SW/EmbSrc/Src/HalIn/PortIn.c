#include "../DrvIn/GpioIn.h"
#include "../HalIn/PortIn.h"
// #include "../App/button.h"
#include "../App/switchled.h"



ePortInState PortInGetStatePB7(void) {
	eGpioInPortState PortInStateStatusSwitch = GpioInGetPortB7();
	if (GPIO_IN_PORT_HIGH == PortInStateStatusSwitch) {
		return PORT_IN_PORT_HIGH;
}
	else {
		return PORT_IN_PORT_LOW;
	}
}


// Switches from switchled.c

ePortInState PortInGetStatePB0(void) {
	eGpioInPortState PortInStateStatusSwitch = GpioInGetPortB0();
	if (GPIO_IN_PORT_HIGH == PortInStateStatusSwitch) {
		return PORT_IN_PORT_HIGH;
}
	else {
		return PORT_IN_PORT_LOW;
	}
}

ePortInState PortInGetStatePB5(void) {
	eGpioInPortState PortInStateStatusSwitch = GpioInGetPortB5();
	if (GPIO_IN_PORT_HIGH == PortInStateStatusSwitch) {
		return PORT_IN_PORT_HIGH;
}
	else {
		return PORT_IN_PORT_LOW;
	}
}

ePortInState PortInGetStatePB4(void) {
	eGpioInPortState PortInStateStatusSwitch= GpioInGetPortB4();
	if (GPIO_IN_PORT_HIGH == PortInStateStatusSwitch) {
		return PORT_IN_PORT_HIGH;
}
	else {
		return PORT_IN_PORT_LOW;
	}
}

