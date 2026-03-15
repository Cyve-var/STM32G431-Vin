#include "..\Target\Target.h"
#include "..\STM32G431\STM32G431_RCC_Def.h"


#define RCC_HSI_OSC_16000000 16000000
#define RCC_HSE_OSC_8000000 8000000

#define RCC_PLLSRC_NO_CLOCK_00 0
#define RCC_PLLSRC_NO_CLOCK_01 1
#define RCC_PLLSRC_HSI16_02 2
#define RCC_PLLSRC_HSE_03 3


#define RCC_CFGR_SW_HSI16 1
#define RCC_CFGR_SW_HSE 2
#define RCC_CFGR_SW_PLL 3


void G431RccInit(void)
{
	volatile sSTM32G431_RCC* pRcc = (sSTM32G431_RCC*)RCC_ADR;
	uSTM32G431_RCC_RCC_AHB2ENR RccAhb2enr;

	RccAhb2enr.All = 0;			// Reset value: 0x0000 0000
	RccAhb2enr.Bit.GPIOBEN = 1;
	RccAhb2enr.Bit.GPIOAEN = 1;
	pRcc->STM32G431_RCC_RCC_AHB2ENR.All = RccAhb2enr.All;
}
