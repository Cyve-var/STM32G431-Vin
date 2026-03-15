#include "..\Target\Target.h"
#include "WrapperDef.h"

extern void int00();
extern void int01();
extern void int02();
extern void int03();
extern void int04();
extern void int05();
extern void int06();
extern void int07();
extern void int08();
extern void int09();
extern void int10();
extern void int11();
extern void int12();
extern void int13();
extern void int14();
extern void int15();
extern void int16();
extern void int17();
extern void int18();
extern void int19();
extern void int20();
extern void int21();
extern void int22();
extern void int23();
extern void int24();
extern void int25();
extern void int26();
extern void int27();
extern void int28();
extern void int29();
extern void int30();
extern void int31();

DLL_EXPORT void WrapperInterrupt(unsigned char Pos) {
	switch (Pos) {
	case  0: int00(); break;
	case  1: int01(); break;
	case  2: int02(); break;
	case  3: int03(); break;
	case  4: int04(); break;
	case  5: int05(); break;
	case  6: int06(); break;
	case  7: int07(); break;
	case  8: int08(); break;
	case  9: int09(); break;
	case 10: int10(); break;
	case 11: int11(); break;
	case 12: int12(); break;
	case 13: int13(); break;
	case 14: int14(); break;
	case 15: int15(); break;
	case 16: int16(); break;
	case 17: int17(); break;
	case 18: int18(); break;
	case 19: int19(); break;
	case 20: int20(); break;
	case 21: int21(); break;
	case 22: int22(); break;
	case 23: int23(); break;
	case 24: int24(); break;
	case 25: int25(); break;
	case 26: int26(); break;
	case 27: int27(); break;
	case 28: int28(); break;
	case 29: int29(); break;
	case 30: int30(); break;
	case 31: int31(); break;
	default: break;
	}
}
