#include "Target.h"

#ifdef WIN_SIM

tTargetMemoryBlock TargetMemory[PERIPHERAL_REGISTER_COUNT];

	unsigned char NvicReg[1024];
	unsigned char PwrReg[1024];
	unsigned char ScbReg[1024];
	unsigned char SysTickReg[1024];
	
	const unsigned char AdcCalibrationValue[4] = { 0x6D,0x06,0x0,0x0 };
	unsigned char FlashSeg31[1024];
#if 0
void TargetRegisterWriteUsart1Tdr(unsigned char Data) {
		volatile unsigned long* pUSART_TDR = (unsigned long*)(USART1_ADR + 0x28);
		volatile uUSART_ISR* pUsartIsr = (uUSART_ISR*)(USART1_ADR + 0x1C);
		*pUSART_TDR = Data;
		pUsartIsr->Bit.TC = 0;
	}

void TargetRegisterWriteUsart2Tdr(unsigned char Data) {
		volatile unsigned long* pUSART_TDR = (unsigned long*)(USART2_ADR + 0x28);
		volatile uUSART_ISR* pUsartIsr = (uUSART_ISR*)(USART2_ADR + 0x1C);
		*pUSART_TDR = Data;
		pUsartIsr->Bit.TC = 0;
	} 
#endif
#else

#include "../Drv/Interrupt.h"
 
typedef void
(* const pHandler)(void);

__attribute__ ((section(".isr_vector"),used))
const pHandler IntVector[] = {
	(pHandler)0x20007FFF, // Stack Pointer after Reset // 0x00
	intReset,            //  The Microcontroller jumps to this function after Reset // 0x04
	intNmi,              // 0x08
	intHardFault,        // 0x0C
	0,                   // 0x10
	0,                   // 0x14
	0,                   // 0x18
	0,                   // 0x1c
	0,                   // 0x20
	0,                   // 0x24
	0,                   // 0x28
	intSvCall,           // 0x2c
	0,                   // 0x30
	0,                   // 0x34
	intPendSv,           // 0x38
	intSysTick,          // 0x3C

	int00,
	int01,
	int02,
	int03,
	int04,
	int05,
	int06,
	int07,
	int08,
	int09,
	int10,
	int11,
	int12,
	int13,
	int14,
	int15,
	int16,
	int17,
	int18,
	int19,
	int20,
	int21,
	int22,
	int23,
	int24,
	int25,
	int26,
	int27,
	int28,
	int29,
	int30,
	int31,
	int32,
	int33,
	int34,
	int35,
	int36,
	int37,
	int38,
	int39,
	int40,
	int41,
	int42,
	int43,
	int44,
	int45,
	int46,
	int47,
	int48,
	int49,
	int50,
	int51,
	int52,
	int53,
	int54,
	int55,
	int56,
	int57,
	int58,
	int59,
	int60,
	int61,
	int62,
	int63,
	int64,
	int65,
	int66,
	int67,
	int68,
	int69,
	int70,
	int71,
	int72,
	int73,
	int74,
	int75,
	int76,
	int77,
	int78,
	int79,
	int80,
	int81,
	int82,
	int83,
	int84,
	int85,
	int86,
	int87,
	int88,
	int89,
	int90,
	int91,
	int92,
	int93,
	int94,
	int95,
	int96,
	int97,
	int98,
	int99,
	int100,
	int101
};

void TargetRegisterWriteUsart1Tdr(unsigned char Data) {
	volatile unsigned long* pUSART_TDR = (unsigned long*)(USART1_ADR + 0x28);
	*pUSART_TDR = Data;
}

void TargetRegisterWriteUsart2Tdr(unsigned char Data) {
	volatile unsigned long* pUSART_TDR = (unsigned long*)(USART2_ADR + 0x28);
	*pUSART_TDR = Data;
}
#endif

/*
  Target.c is needed for Simulation with Visual Studio and C#. (#ifdef WIN_SIM)
  If using the Target STM32G431 you use the second part of this file (Start at line 29 #else)
  #ifdef and #else are preprocessor definitions. if WIN_SIM is defined the compiler uses the #if or the #else path.
  You can set the #define in code or in the compiler call from the development environment.
 */
