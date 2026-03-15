#include "WrapperDef.h"

extern unsigned long DmaAdc[4];

DLL_EXPORT void WrapperDmaAdcSetValue(unsigned char Idx, unsigned long Value) { 
	DmaAdc[Idx] = Value;
}