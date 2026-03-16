/*
 * switchled.h
 *
 *  Created on: 13.03.2026
 *      Author: Vince
 */
#include "common.h"

/* Button */
typedef enum  {STATUS_SWITCH_ON, STATUS_SWITCH_OFF}
eStatusSwitchState;

void LedInit(void);
void StatusSwitchInit(void);
void SwitchMain(void);


eStatusSwitchState StatusSwitchGetState(void);

// LED 1
eLedState Led_PA9_GetState(void);
// LED 2
eLedState Led_PA10_GetState(void);
// LED 3
eLedState Led_PA12_GetState(void);
// LED 4
eLedState Led_PA11_GetState(void);
