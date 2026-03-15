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

// Led


void StatusSwitchInit(void);
void SwitchMain(void);
void Led2Init(void);

eStatusSwitchState StatusSwitchGetState(void);

eLedState Led_PA9_GetState(void);
eLedState Led_PA10_GetState(void);
eLedState Led_PA12_GetState(void);
eLedState Led_PA8_GetState(void);
