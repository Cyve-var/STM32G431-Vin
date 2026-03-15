#include "WrapperDef.h"
#include "../App/ControlPilot.h"

eControlPilotState ControlPilotState;

DLL_EXPORT unsigned char WrapperDebugControlPilotState(void) {
	return (unsigned char)ControlPilotState;
}