void TargetRegisterWriteUsart1Tdr(unsigned char Data);
void TargetRegisterWriteUsart2Tdr(unsigned char Data);

#ifdef WIN_SIM

#define TARGET_PERIPH_MEMORY_SIZE 256

typedef struct {
	unsigned char TargetMemory[TARGET_PERIPH_MEMORY_SIZE];
} tTargetMemoryBlock;

extern tTargetMemoryBlock TargetMemory[];

typedef enum {
	GPIOB, STK, RCC, PERIPHERAL_REGISTER_COUNT
} tTargetPeriph;

#define ASM(x)
#define ATTRIBUTE_SECTION(x)
#define RAMFUNC

#define RCC_ADR        (unsigned char *)&TargetMemory[RCC]
#define GPIOB_ADR      (unsigned char *)&TargetMemory[GPIOB]
#define SYSTICK_ADR    (unsigned char *)&TargetMemory[STK]

extern tTargetMemoryBlock TargetMemory[PERIPHERAL_REGISTER_COUNT];

	extern unsigned char NvicReg[1024];
	extern unsigned char PwrReg[1024];
	extern unsigned char ScbReg[1024];
	extern unsigned char SysTickReg[1024];
	extern const unsigned char AdcCalibrationValue[4];
	extern unsigned char FlashSeg31[1024];
#else

	#define ASM(x) asm(x)
	#define ATTRIBUTE_SECTION(x) __attribute__ (x)
	#define RAMFUNC __attribute__ ((long_call, section (".ramfunctions")))

	#define RCC_ADR 0x40021000
	#define ADC_ADR  0x40012400
	#define ADC1_2_ADR 0x50000000
	#define EXTI_ADR 0x40010400

	#define GPIOA_ADR 0x48000000
	#define GPIOB_ADR 0x48000400
	#define GPIOC_ADR 0x48000800
	#define GPIOD_ADR 0x48000C00
	#define GPIOF_ADR 0x48001400

	#define NVIC_ADR 0xE000E100
	#define PWR_ADR  0X40007000

	#define RTC_ADR 0x40002800

	#define SCB_ADR 0xE000E000

	#define SPI3_ADR 0x40003C00
	#define SYSCFG_ADR 0x40010000
	#define SYSTICK_ADR 0xE000E010

	#define TIM1_ADR 0x40012C00
	#define TIM2_ADR 0x40000000
	#define TIM3_ADR 0x40000400
	#define TIM8_ADR 0x40013400
	#define TIM14_ADR 0x40002000
	#define TIM15_ADR 0x40014000
	#define TIM16_ADR 0x40014400
	#define DMA_ADR  0x40020000
	#define DMA_MUX_ADR  0x40020800

	#define USART1_ADR 0x40013800
	#define USART2_ADR 0x40004400
	#define USART3_ADR 0x40004800
	#define LPUART1_ADR 0X40008000
	#define ADC_CAL_ADR 0x1FFF75AA

	#define FLASH_SEG_31_ADR 0x08007800
	#define FLASH_ADR  0x40022000

#endif
