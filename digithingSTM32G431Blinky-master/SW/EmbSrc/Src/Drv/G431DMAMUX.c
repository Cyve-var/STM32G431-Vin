#include "../Target/Target.h"
#include "../STM32G431/STM32G431_DMAMUX_OVR_Def.h"
#include "G431DmaMux.h"

void G431DmaMuxInit(void) {
    volatile sSTM32G431_DMAMUX_OVR* pSTM32G431_DMAMUX_OVR = (sSTM32G431_DMAMUX_OVR*)DMA_MUX_ADR;
    volatile uSTM32G431_DMAMUX_OVR_C0CR STM32G431_DMAMUX_OVR_C0CR;

    //set DMAREQ_ID to 62 (TIM3_CH2) or set DMAREQ_ID to 65 (TIM3_UP)

    STM32G431_DMAMUX_OVR_C0CR.All = 0;
    STM32G431_DMAMUX_OVR_C0CR.Bit.DMAREQ_ID = 65;


    // write to hardware

    pSTM32G431_DMAMUX_OVR->STM32G431_DMAMUX_OVR_C0CR.All = STM32G431_DMAMUX_OVR_C0CR.All;
}


void G431DmaMuxMain(void) {
#if 1 /* Only for debug reason to find out if dma works */
	volatile sSTM32G431_DMAMUX_OVR* pSTM32G431_DMAMUX_OVR = (sSTM32G431_DMAMUX_OVR*)DMA_MUX_ADR;
	ASM("NOP");
#endif
}
