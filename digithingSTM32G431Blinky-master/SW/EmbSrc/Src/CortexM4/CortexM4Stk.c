#include "..\Target\Target.h"
#include "..\CortexM4\CortexM4StkDef.h"
#include "../Drv/G431Rcc.h"

unsigned int StkCounter;

void CortexM4SysTickInit(void) {
	volatile tCORTEX_M4_STK* pStk = (tCORTEX_M4_STK*)(SYSTICK_ADR);
	uSTK_CTRL StkCtrl;
	uSTK_LOAD StkLoad;

	StkCounter = 0;

	StkLoad.All = 0; 	// Reset value: 0x0000 0000
	StkLoad.Bit.RELOAD = (16000000/200); /* 5 ms */
	pStk->STK_LOAD.All = StkLoad.All;

	StkCtrl.All = 0; 	// Reset value: 0x0000 0000
	StkCtrl.Bit.ENABLE = 1;
	StkCtrl.Bit.TICKINT = 1;	// 1: Counting down to zero to asserts the SysTick exception request.
	StkCtrl.Bit.CLKSOURCE = 1;	// 1: Processor clock (AHB)
	pStk->STK_CTRL.All = StkCtrl.All;
}

void CortexM4StkInt(void) {
	StkCounter++;
}

unsigned int  CortexM4StkGetCounter(void) {
	return StkCounter;
}

