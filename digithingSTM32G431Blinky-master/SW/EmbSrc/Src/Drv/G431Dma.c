#include "../Target/Target.h"
#include "../STM32G431/STM32G431_DMA1_CH6_Def.h"
// #include "../STM32G431/STM32G431_ADC1_Def.h"
// #include "../STM32G431/STM32G431_ADC1_2_Def.h"
#include "../STM32G431/STM32G431_TIM3_Def.h"
#include "../HalOut/NeoPixel.h"


// #define DMA_CHANNEL_0 0




void G431DmaInitCh1 (void) {

	volatile sSTM32G431_DMA1_CH6* pSTM32G431_DMA1_CH6 = (sSTM32G431_DMA1_CH6*)DMA_ADR;
	volatile sSTM32G431_TIM3* pSTM32G431_TIM3 = (sSTM32G431_TIM3*)TIM3_ADR;

	volatile uSTM32G431_DMA1_CH6_CCR1 STM32G431_DMA1_CH6_CCR1;
	volatile uSTM32G431_DMA1_CH6_CNDTR1 STM32G431_DMA1_CH6_CNDTR1;

	uNeoPixelProtocol * pDmaNeoPixelProtocol;
	pDmaNeoPixelProtocol = pNeoPixelGetProtocolData();

		pSTM32G431_DMA1_CH6->STM32G431_DMA1_CH6_CPAR1.Bit.PA = (unsigned long)&pSTM32G431_TIM3->STM32G431_TIM3_CCR2.All;
	pSTM32G431_DMA1_CH6->STM32G431_DMA1_CH6_CMAR1.Bit.MA = (unsigned long)(pDmaNeoPixelProtocol);

	STM32G431_DMA1_CH6_CNDTR1.All = 0;
	STM32G431_DMA1_CH6_CNDTR1.Bit.NDT = (NEOPIXEL_DATA_SIZE_RAW+NEO_PIXEL_TIME_RESET);
	pSTM32G431_DMA1_CH6->STM32G431_DMA1_CH6_CNDTR1.All = STM32G431_DMA1_CH6_CNDTR1.All;

	STM32G431_DMA1_CH6_CCR1.All = 0; // Reset all bits in the control register
	STM32G431_DMA1_CH6_CCR1.Bit.MEM2MEM = 0; // Memory-to-memory mode disabled
	STM32G431_DMA1_CH6_CCR1.Bit.PL = 0; // Priority level: Low
	STM32G431_DMA1_CH6_CCR1.Bit.MSIZE = 0; // Memory data size: 8-bit
	STM32G431_DMA1_CH6_CCR1.Bit.PSIZE = 2; // Peripheral data size: 32-bit
	STM32G431_DMA1_CH6_CCR1.Bit.MINC = 1; // Memory increment mode enabled
	STM32G431_DMA1_CH6_CCR1.Bit.PINC = 0; // Peripheral increment mode disabled (fixed address)
	STM32G431_DMA1_CH6_CCR1.Bit.DIR = 1; // Memory to Peripheral
	STM32G431_DMA1_CH6_CCR1.Bit.CIRC= 1; // Circular Mode, DMA restarts forever
	STM32G431_DMA1_CH6_CCR1.Bit.TCIE= 1; //Transfer Complete Interrupt Enable.
	STM32G431_DMA1_CH6_CCR1.Bit.EN = 1; // DMA Channel Enable
	pSTM32G431_DMA1_CH6->STM32G431_DMA1_CH6_CCR1.All = STM32G431_DMA1_CH6_CCR1.All; // Apply config to hardware
}

void G431DmaMain(void) {
#if 1 /* Only for debug reason to find out if dma works */
	volatile sSTM32G431_DMA1_CH6* pSTM32G431_DMA1_CH6 = (sSTM32G431_DMA1_CH6*)DMA_ADR;
	ASM("NOP");
#endif
}
