#include "..\CortexM4\CortexM4Stk.h"
#include "../DrvOut/GpioOut.h"
#include "../DrvIn/GpioIn.h"
#include "../App/StatusLed.h"
// #include "../App/button.h"
#include "../App/switchled.h"

#define TS_case_2     1
#define TS_case_4     3
#define TS_case_8     7
#define TS_case_16    15
#define TS_case_32    31
#define TS_case_64    63
#define TS_case_128   127
#define TS_case_256   255
#define TS_case_512   511
#define TS_case_1024  1023
#define TS_case_2048  2047
#define TS_case_4096  4095
#define TS_case_8192  8191


static unsigned short int TimesliceCounter;

void TimesliceInit(void) {
	TimesliceCounter = 0;
}

void Timeslot1 (void) { /* 10ms */
	GpioOutMain();
	SwitchMain();
}
void Timeslot2 (void) {

}

void Timeslot4 (void) {

}
void Timeslot8 (void) {
	//ButtonMain();
}
void Timeslot16 (void) { }
void Timeslot32 (void) {

	/*StatusLedMain()*/
	}
void Timeslot64 (void) { }
void Timeslot128 (void) { 
}
void Timeslot256 (void) {}

void Timeslot512 (void) {
}
void Timeslot1024 (void) { }
void Timeslot2048 (void) { }
void Timeslot4096 (void) { }
void TimeslotIdle (void) { }

 void StartTimesliceForever(void) {
	static unsigned int TimesliceSystickCounterOld;
	static unsigned int TimesliceSystickCounter;

	while(1) {
		TimesliceSystickCounter = CortexM4StkGetCounter();
 		if (TimesliceSystickCounter != TimesliceSystickCounterOld) {
			TimesliceCounter++;
 			TimesliceSystickCounterOld = TimesliceSystickCounter;
			switch (TimesliceCounter^(TimesliceCounter+1)) {
				case TS_case_2    : Timeslot1();    break;
				case TS_case_4    : Timeslot2();    break;
				case TS_case_8    : Timeslot4();    break;
				case TS_case_16   : Timeslot8();    break;
				case TS_case_32   : Timeslot16();   break;
				case TS_case_64   : Timeslot32();   break;
				case TS_case_128  : Timeslot64();   break;
				case TS_case_256  : Timeslot128();  break;
				case TS_case_512  : Timeslot256();  break;
				case TS_case_1024 : Timeslot512();  break;
				case TS_case_2048 : Timeslot1024(); break;
				case TS_case_4096 : Timeslot2048(); break;
				case TS_case_8192 : Timeslot4096(); break;
			default : TimeslotIdle(); break;
			}
		}
	}
}

 /*
  The timeslice is a very effective small operating system with timeslots to call functions.
  We start with the fastest timeslot 10 ms.
  The next timeslot is the double time and so on.
  */
