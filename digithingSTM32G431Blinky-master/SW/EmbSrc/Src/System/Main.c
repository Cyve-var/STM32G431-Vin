
#include "..\System\main.h"
#include "..\Target\Target.h"
#include "..\Drv\G431Rcc.h"
#include "..\CortexM4\CortexM4Stk.h"
#include "..\Drv\G431Gpio.h"
#include "..\App\switchled.h"
#include "..\System\Timeslice.h"
#include "..\App\neopixcode.h"
#include "..\HalOut\NeoPixel.h"
#include "..\CortexM4\CortexM4Nvic.h"
#include "..\Drv\G431DMAMUX.h"
#include "..\Drv\G431Dma.h"
#include "..\Drv\G431Timer3.h"
int main()
{
	G431RccInit();
	GpioInit();
	CortexM4SysTickInit();
	CortexM4NvicInit();
	StatusSwitchInit();

	LedInit();
	LedMatrixInit();
	NeoPixelInit();
	G431DmaInitCh1();
	G431DmaMuxInit();
	G431Timer3Init();



	TimesliceInit();
	StartTimesliceForever();
	while(1);
	return 0;
}

/*
 After Reset the Microcontroller jumps first to intReset and then to main();
 In the Main there are all initializations and after the initialization we jump to a timeslice.
 The timeslice is a low level operatin system. There are called all functions.
 There are fast and slow timeslots where you can call your functions.

 In G431RccInit we start the peripheral clocks for the GPIO.
 This is needed because when we will use a Port we first have to start the corresponding clock.

 In GpioInit we initialize the Port as Input, Output, Analog Input or Alternate function.

 To use the Timeslice we need a Timer. The STM32G4 has a System Tick Timer. We get an Interrupt if the Timer run to 0.
 And we use this Interrupt for the Timeslice.

 At last we Init the Timeslice and then Jump to the Timeslice Operating system forever.
 */
