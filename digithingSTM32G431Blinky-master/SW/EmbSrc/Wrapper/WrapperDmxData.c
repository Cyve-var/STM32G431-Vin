#include "WrapperDef.h"
#include "../Src/HalOut/DmxOut.h"

extern unsigned char DmxOutData[];

DLL_EXPORT unsigned char WrapperDmxGetData(Channel) {
	return DmxOutData[Channel];
}