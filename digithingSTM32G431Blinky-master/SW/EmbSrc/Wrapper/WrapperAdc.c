#include "WrapperDef.h"

extern unsigned long DmaAdc[];

DLL_EXPORT void WrapperAdcSetChannel(unsigned long AdcChannel, unsigned long AdcValue) {
	DmaAdc[AdcChannel] = AdcValue;
}

DLL_EXPORT unsigned long WrapperAdcGetChannel(unsigned long AdcChannel) {
	return DmaAdc[AdcChannel];
}
