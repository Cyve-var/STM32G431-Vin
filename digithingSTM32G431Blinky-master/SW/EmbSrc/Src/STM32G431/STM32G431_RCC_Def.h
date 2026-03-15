// Base Addres of RCC = 0x40021000

#define STM32G431_RCC_RCC_CR_RESET_VALUE 0x00000063
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HSION : 1;
    unsigned long HSIKERON : 1;
    unsigned long HSIRDY : 1;
    unsigned long Res1 : 5;
    unsigned long HSEON : 1;
    unsigned long HSERDY : 1;
    unsigned long HSEBYP : 1;
    unsigned long CSSON : 1;
    unsigned long Res2 : 4;
    unsigned long PLLON : 1;
    unsigned long PLLRDY : 1;
    unsigned long Res3 : 6;
} sSTM32G431_RCC_RCC_CR;

typedef union {
    sSTM32G431_RCC_RCC_CR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CR;

#define STM32G431_RCC_RCC_ICSCR_RESET_VALUE 0x40000000
typedef struct {
    unsigned long Res0 : 16;
    unsigned long HSICAL : 8;
    unsigned long HSITRIM : 7;
    unsigned long Res1 : 1;
} sSTM32G431_RCC_RCC_ICSCR;

typedef union {
    sSTM32G431_RCC_RCC_ICSCR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_ICSCR;

#define STM32G431_RCC_RCC_CFGR_RESET_VALUE 0x00000005
typedef struct {
    unsigned long SW : 2;
    unsigned long SWS : 2;
    unsigned long HPRE : 4;
    unsigned long PPRE1 : 3;
    unsigned long PPRE2 : 3;
    unsigned long Res0 : 10;
    unsigned long MCOSEL : 4;
    unsigned long MCOPRE : 3;
    unsigned long Res1 : 1;
} sSTM32G431_RCC_RCC_CFGR;

typedef union {
    sSTM32G431_RCC_RCC_CFGR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CFGR;

#define STM32G431_RCC_RCC_PLLCFGR_RESET_VALUE 0x00001000
typedef struct {
    unsigned long PLLSRC : 2;
    unsigned long Res0 : 2;
    unsigned long PLLM : 4;
    unsigned long PLLN : 7;
    unsigned long Res1 : 1;
    unsigned long PLLPEN : 1;
    unsigned long PLLP : 1;
    unsigned long Res2 : 2;
    unsigned long PLLQEN : 1;
    unsigned long PLLQ : 2;
    unsigned long Res3 : 1;
    unsigned long PLLREN : 1;
    unsigned long PLLR : 2;
    unsigned long PLLPDIV : 5;
} sSTM32G431_RCC_RCC_PLLCFGR;

typedef union {
    sSTM32G431_RCC_RCC_PLLCFGR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_PLLCFGR;

#define STM32G431_RCC_RCC_CIER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSIRDYIE : 1;
    unsigned long LSERDYIE : 1;
    unsigned long Res0 : 1;
    unsigned long HSIRDYIE : 1;
    unsigned long HSERDYIE : 1;
    unsigned long PLLRDYIE : 1;
    unsigned long Res1 : 3;
    unsigned long LSECSSIE : 1;
    unsigned long HSI48RDYIE : 1;
    unsigned long Res2 : 21;
} sSTM32G431_RCC_RCC_CIER;

typedef union {
    sSTM32G431_RCC_RCC_CIER Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CIER;

#define STM32G431_RCC_RCC_CIFR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSIRDYF : 1;
    unsigned long LSERDYF : 1;
    unsigned long Res0 : 1;
    unsigned long HSIRDYF : 1;
    unsigned long HSERDYF : 1;
    unsigned long PLLRDYF : 1;
    unsigned long Res1 : 2;
    unsigned long CSSF : 1;
    unsigned long LSECSSF : 1;
    unsigned long HSI48RDYF : 1;
    unsigned long Res2 : 21;
} sSTM32G431_RCC_RCC_CIFR;

typedef union {
    sSTM32G431_RCC_RCC_CIFR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CIFR;

#define STM32G431_RCC_RCC_CICR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSIRDYC : 1;
    unsigned long LSERDYC : 1;
    unsigned long Res0 : 1;
    unsigned long HSIRDYC : 1;
    unsigned long HSERDYC : 1;
    unsigned long PLLRDYC : 1;
    unsigned long Res1 : 2;
    unsigned long CSSC : 1;
    unsigned long LSECSSC : 1;
    unsigned long HSI48RDYC : 1;
    unsigned long Res2 : 21;
} sSTM32G431_RCC_RCC_CICR;

typedef union {
    sSTM32G431_RCC_RCC_CICR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CICR;

#define STM32G431_RCC_RCC_AHB1RSTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DMA1RST : 1;
    unsigned long DMA2RST : 1;
    unsigned long DMAMUX1RST : 1;
    unsigned long CORDICRST : 1;
    unsigned long FMACRST : 1;
    unsigned long Res0 : 3;
    unsigned long FLASHRST : 1;
    unsigned long Res1 : 3;
    unsigned long CRCRST : 1;
    unsigned long Res2 : 19;
} sSTM32G431_RCC_RCC_AHB1RSTR;

typedef union {
    sSTM32G431_RCC_RCC_AHB1RSTR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB1RSTR;

#define STM32G431_RCC_RCC_AHB2RSTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long GPIOARST : 1;
    unsigned long GPIOBRST : 1;
    unsigned long GPIOCRST : 1;
    unsigned long GPIODRST : 1;
    unsigned long GPIOERST : 1;
    unsigned long GPIOFRST : 1;
    unsigned long GPIOGRST : 1;
    unsigned long Res0 : 6;
    unsigned long ADC12RST : 1;
    unsigned long ADC345RST : 1;
    unsigned long Res1 : 1;
    unsigned long DAC1RST : 1;
    unsigned long DAC2RST : 1;
    unsigned long DAC3RST : 1;
    unsigned long DAC4RST : 1;
    unsigned long Res2 : 4;
    unsigned long AESRST : 1;
    unsigned long Res3 : 1;
    unsigned long RNGRST : 1;
    unsigned long Res4 : 5;
} sSTM32G431_RCC_RCC_AHB2RSTR;

typedef union {
    sSTM32G431_RCC_RCC_AHB2RSTR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB2RSTR;

#define STM32G431_RCC_RCC_AHB3RSTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FMCRST : 1;
    unsigned long Res0 : 7;
    unsigned long QSPIRST : 1;
    unsigned long Res1 : 23;
} sSTM32G431_RCC_RCC_AHB3RSTR;

typedef union {
    sSTM32G431_RCC_RCC_AHB3RSTR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB3RSTR;

#define STM32G431_RCC_RCC_APB1RSTR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIM2RST : 1;
    unsigned long TIM3RST : 1;
    unsigned long TIM4RST : 1;
    unsigned long TIM5RST : 1;
    unsigned long TIM6RST : 1;
    unsigned long TIM7RST : 1;
    unsigned long Res0 : 2;
    unsigned long CRSRST : 1;
    unsigned long Res1 : 5;
    unsigned long SPI2RST : 1;
    unsigned long SPI3RST : 1;
    unsigned long Res2 : 1;
    unsigned long USART2RST : 1;
    unsigned long USART3RST : 1;
    unsigned long UART4RST : 1;
    unsigned long UART5RST : 1;
    unsigned long I2C1RST : 1;
    unsigned long I2C2RST : 1;
    unsigned long USBRST : 1;
    unsigned long Res3 : 1;
    unsigned long FDCANRST : 1;
    unsigned long Res4 : 2;
    unsigned long PWRRST : 1;
    unsigned long Res5 : 1;
    unsigned long I2C3RST : 1;
    unsigned long LPTIM1RST : 1;
} sSTM32G431_RCC_RCC_APB1RSTR1;

typedef union {
    sSTM32G431_RCC_RCC_APB1RSTR1 Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB1RSTR1;

#define STM32G431_RCC_RCC_APB1RSTR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPUART1RST : 1;
    unsigned long I2C4RST : 1;
    unsigned long Res0 : 6;
    unsigned long UCPD1RST : 1;
    unsigned long Res1 : 23;
} sSTM32G431_RCC_RCC_APB1RSTR2;

typedef union {
    sSTM32G431_RCC_RCC_APB1RSTR2 Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB1RSTR2;

#define STM32G431_RCC_RCC_APB2RSTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYSCFGRST : 1;
    unsigned long Res0 : 10;
    unsigned long TIM1RST : 1;
    unsigned long SPI1RST : 1;
    unsigned long TIM8RST : 1;
    unsigned long USART1RST : 1;
    unsigned long SPI4RST : 1;
    unsigned long TIM15RST : 1;
    unsigned long TIM16RST : 1;
    unsigned long TIM17RST : 1;
    unsigned long Res1 : 1;
    unsigned long TIM20RST : 1;
    unsigned long SAI1RST : 1;
    unsigned long Res2 : 4;
    unsigned long HRTIM1RST : 1;
    unsigned long Res3 : 5;
} sSTM32G431_RCC_RCC_APB2RSTR;

typedef union {
    sSTM32G431_RCC_RCC_APB2RSTR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB2RSTR;

#define STM32G431_RCC_RCC_AHB1ENR_RESET_VALUE 0x00000100
typedef struct {
    unsigned long DMA1EN : 1;
    unsigned long DMA2EN : 1;
    unsigned long DMAMUX1EN : 1;
    unsigned long CORDICEN : 1;
    unsigned long FMACEN : 1;
    unsigned long Res0 : 3;
    unsigned long FLASHEN : 1;
    unsigned long Res1 : 3;
    unsigned long CRCEN : 1;
    unsigned long Res2 : 19;
} sSTM32G431_RCC_RCC_AHB1ENR;

typedef union {
    sSTM32G431_RCC_RCC_AHB1ENR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB1ENR;

#define STM32G431_RCC_RCC_AHB2ENR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long GPIOAEN : 1;
    unsigned long GPIOBEN : 1;
    unsigned long GPIOCEN : 1;
    unsigned long GPIODEN : 1;
    unsigned long GPIOEEN : 1;
    unsigned long GPIOFEN : 1;
    unsigned long GPIOGEN : 1;
    unsigned long Res0 : 6;
    unsigned long ADC12EN : 1;
    unsigned long ADC345EN : 1;
    unsigned long Res1 : 1;
    unsigned long DAC1EN : 1;
    unsigned long DAC2EN : 1;
    unsigned long DAC3EN : 1;
    unsigned long DAC4EN : 1;
    unsigned long Res2 : 4;
    unsigned long AESEN : 1;
    unsigned long Res3 : 1;
    unsigned long RNGEN : 1;
    unsigned long Res4 : 5;
} sSTM32G431_RCC_RCC_AHB2ENR;

typedef union {
    sSTM32G431_RCC_RCC_AHB2ENR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB2ENR;

#define STM32G431_RCC_RCC_AHB3ENR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FMCEN : 1;
    unsigned long Res0 : 7;
    unsigned long QSPIEN : 1;
    unsigned long Res1 : 23;
} sSTM32G431_RCC_RCC_AHB3ENR;

typedef union {
    sSTM32G431_RCC_RCC_AHB3ENR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB3ENR;

#define STM32G431_RCC_RCC_APB1ENR1_RESET_VALUE 0x00000400
typedef struct {
    unsigned long TIM2EN : 1;
    unsigned long TIM3EN : 1;
    unsigned long TIM4EN : 1;
    unsigned long TIM5EN : 1;
    unsigned long TIM6EN : 1;
    unsigned long TIM7EN : 1;
    unsigned long Res0 : 2;
    unsigned long CRSEN : 1;
    unsigned long Res1 : 1;
    unsigned long RTCAPBEN : 1;
    unsigned long WWDGEN : 1;
    unsigned long Res2 : 2;
    unsigned long SPI2EN : 1;
    unsigned long SPI3EN : 1;
    unsigned long Res3 : 1;
    unsigned long USART2EN : 1;
    unsigned long USART3EN : 1;
    unsigned long UART4EN : 1;
    unsigned long UART5EN : 1;
    unsigned long I2C1EN : 1;
    unsigned long I2C2EN : 1;
    unsigned long USBEN : 1;
    unsigned long Res4 : 1;
    unsigned long FDCANEN : 1;
    unsigned long Res5 : 2;
    unsigned long PWREN : 1;
    unsigned long Res6 : 1;
    unsigned long I2C3EN : 1;
    unsigned long LPTIM1EN : 1;
} sSTM32G431_RCC_RCC_APB1ENR1;

typedef union {
    sSTM32G431_RCC_RCC_APB1ENR1 Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB1ENR1;

#define STM32G431_RCC_RCC_APB1ENR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPUART1EN : 1;
    unsigned long I2C4EN : 1;
    unsigned long Res0 : 6;
    unsigned long UCPD1EN : 1;
    unsigned long Res1 : 23;
} sSTM32G431_RCC_RCC_APB1ENR2;

typedef union {
    sSTM32G431_RCC_RCC_APB1ENR2 Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB1ENR2;

#define STM32G431_RCC_RCC_APB2ENR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYSCFGEN : 1;
    unsigned long Res0 : 10;
    unsigned long TIM1EN : 1;
    unsigned long SPI1EN : 1;
    unsigned long TIM8EN : 1;
    unsigned long USART1EN : 1;
    unsigned long SPI4EN : 1;
    unsigned long TIM15EN : 1;
    unsigned long TIM16EN : 1;
    unsigned long TIM17EN : 1;
    unsigned long Res1 : 1;
    unsigned long TIM20EN : 1;
    unsigned long SAI1EN : 1;
    unsigned long Res2 : 4;
    unsigned long HRTIM1EN : 1;
    unsigned long Res3 : 5;
} sSTM32G431_RCC_RCC_APB2ENR;

typedef union {
    sSTM32G431_RCC_RCC_APB2ENR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB2ENR;

#define STM32G431_RCC_RCC_AHB1SMENR_RESET_VALUE 0x0000130F
typedef struct {
    unsigned long DMA1SMEN : 1;
    unsigned long DMA2SMEN : 1;
    unsigned long DMAMUX1SMEN : 1;
    unsigned long CORDICSMEN : 1;
    unsigned long FMACSMEN : 1;
    unsigned long Res0 : 3;
    unsigned long FLASHSMEN : 1;
    unsigned long SRAM1SMEN : 1;
    unsigned long Res1 : 2;
    unsigned long CRCSMEN : 1;
    unsigned long Res2 : 19;
} sSTM32G431_RCC_RCC_AHB1SMENR;

typedef union {
    sSTM32G431_RCC_RCC_AHB1SMENR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB1SMENR;

#define STM32G431_RCC_RCC_AHB2SMENR_RESET_VALUE 0x050F667F
typedef struct {
    unsigned long GPIOASMEN : 1;
    unsigned long GPIOBSMEN : 1;
    unsigned long GPIOCSMEN : 1;
    unsigned long GPIODSMEN : 1;
    unsigned long GPIOESMEN : 1;
    unsigned long GPIOFSMEN : 1;
    unsigned long GPIOGSMEN : 1;
    unsigned long Res0 : 2;
    unsigned long CCMSRAMSMEN : 1;
    unsigned long SRAM2SMEN : 1;
    unsigned long Res1 : 2;
    unsigned long ADC12SMEN : 1;
    unsigned long ADC345SMEN : 1;
    unsigned long Res2 : 1;
    unsigned long DAC1SMEN : 1;
    unsigned long DAC2SMEN : 1;
    unsigned long DAC3SMEN : 1;
    unsigned long DAC4SMEN : 1;
    unsigned long Res3 : 4;
    unsigned long AESSMEN : 1;
    unsigned long Res4 : 1;
    unsigned long RNGEN : 1;
    unsigned long Res5 : 5;
} sSTM32G431_RCC_RCC_AHB2SMENR;

typedef union {
    sSTM32G431_RCC_RCC_AHB2SMENR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB2SMENR;

#define STM32G431_RCC_RCC_AHB3SMENR_RESET_VALUE 0x00000101
typedef struct {
    unsigned long FMCSMEN : 1;
    unsigned long Res0 : 7;
    unsigned long QSPISMEN : 1;
    unsigned long Res1 : 23;
} sSTM32G431_RCC_RCC_AHB3SMENR;

typedef union {
    sSTM32G431_RCC_RCC_AHB3SMENR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_AHB3SMENR;

#define STM32G431_RCC_RCC_APB1SMENR1_RESET_VALUE 0xD2FECD3F
typedef struct {
    unsigned long TIM2SMEN : 1;
    unsigned long TIM3SMEN : 1;
    unsigned long TIM4SMEN : 1;
    unsigned long TIM5SMEN : 1;
    unsigned long TIM6SMEN : 1;
    unsigned long TIM7SMEN : 1;
    unsigned long Res0 : 2;
    unsigned long CRSSMEN : 1;
    unsigned long Res1 : 1;
    unsigned long RTCAPBSMEN : 1;
    unsigned long WWDGSMEN : 1;
    unsigned long Res2 : 2;
    unsigned long SPI2SMEN : 1;
    unsigned long SPI3SMEN : 1;
    unsigned long Res3 : 1;
    unsigned long USART2SMEN : 1;
    unsigned long USART3SMEN : 1;
    unsigned long UART4SMEN : 1;
    unsigned long UART5SMEN : 1;
    unsigned long I2C1SMEN : 1;
    unsigned long I2C2SMEN : 1;
    unsigned long USBSMEN : 1;
    unsigned long Res4 : 1;
    unsigned long FDCANSMEN : 1;
    unsigned long Res5 : 2;
    unsigned long PWRSMEN : 1;
    unsigned long Res6 : 1;
    unsigned long I2C3SMEN : 1;
    unsigned long LPTIM1SMEN : 1;
} sSTM32G431_RCC_RCC_APB1SMENR1;

typedef union {
    sSTM32G431_RCC_RCC_APB1SMENR1 Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB1SMENR1;

#define STM32G431_RCC_RCC_APB1SMENR2_RESET_VALUE 0x00000103
typedef struct {
    unsigned long LPUART1SMEN : 1;
    unsigned long I2C4SMEN : 1;
    unsigned long Res0 : 6;
    unsigned long UCPD1SMEN : 1;
    unsigned long Res1 : 23;
} sSTM32G431_RCC_RCC_APB1SMENR2;

typedef union {
    sSTM32G431_RCC_RCC_APB1SMENR2 Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB1SMENR2;

#define STM32G431_RCC_RCC_APB2SMENR_RESET_VALUE 0x0437F801
typedef struct {
    unsigned long SYSCFGSMEN : 1;
    unsigned long Res0 : 10;
    unsigned long TIM1SMEN : 1;
    unsigned long SPI1SMEN : 1;
    unsigned long TIM8SMEN : 1;
    unsigned long USART1SMEN : 1;
    unsigned long SPI4SMEN : 1;
    unsigned long TIM15SMEN : 1;
    unsigned long TIM16SMEN : 1;
    unsigned long TIM17SMEN : 1;
    unsigned long Res1 : 1;
    unsigned long TIM20SMEN : 1;
    unsigned long SAI1SMEN : 1;
    unsigned long Res2 : 4;
    unsigned long HRTIM1SMEN : 1;
    unsigned long Res3 : 5;
} sSTM32G431_RCC_RCC_APB2SMENR;

typedef union {
    sSTM32G431_RCC_RCC_APB2SMENR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_APB2SMENR;

#define STM32G431_RCC_RCC_CCIPR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long USART1SEL : 2;
    unsigned long USART2SEL : 2;
    unsigned long USART3SEL : 2;
    unsigned long UART4SEL : 2;
    unsigned long UART5SEL : 2;
    unsigned long LPUART1SEL : 2;
    unsigned long I2C1SEL : 2;
    unsigned long I2C2SEL : 2;
    unsigned long I2C3SEL : 2;
    unsigned long LPTIM1SEL : 2;
    unsigned long SAI1SEL : 2;
    unsigned long I2S23SEL : 2;
    unsigned long FDCANSEL : 2;
    unsigned long CLK48SEL : 2;
    unsigned long ADC12SEL : 2;
    unsigned long ADC345SEL : 2;
} sSTM32G431_RCC_RCC_CCIPR;

typedef union {
    sSTM32G431_RCC_RCC_CCIPR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CCIPR;

#define STM32G431_RCC_RCC_BDCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSEON : 1;
    unsigned long LSERDY : 1;
    unsigned long LSEBYP : 1;
    unsigned long LSEDRV : 2;
    unsigned long LSECSSON : 1;
    unsigned long LSECSSD : 1;
    unsigned long Res0 : 1;
    unsigned long RTCSEL : 2;
    unsigned long Res1 : 5;
    unsigned long RTCEN : 1;
    unsigned long BDRST : 1;
    unsigned long Res2 : 7;
    unsigned long LSCOEN : 1;
    unsigned long LSCOSEL : 1;
    unsigned long Res3 : 6;
} sSTM32G431_RCC_RCC_BDCR;

typedef union {
    sSTM32G431_RCC_RCC_BDCR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_BDCR;

#define STM32G431_RCC_RCC_CSR_RESET_VALUE 0x0C000000
typedef struct {
    unsigned long LSION : 1;
    unsigned long LSIRDY : 1;
    unsigned long Res0 : 21;
    unsigned long RMVF : 1;
    unsigned long Res1 : 1;
    unsigned long OBLRSTF : 1;
    unsigned long PINRSTF : 1;
    unsigned long BORRSTF : 1;
    unsigned long SFTRSTF : 1;
    unsigned long IWDGRSTF : 1;
    unsigned long WWDGRSTF : 1;
    unsigned long LPWRRSTF : 1;
} sSTM32G431_RCC_RCC_CSR;

typedef union {
    sSTM32G431_RCC_RCC_CSR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CSR;

#define STM32G431_RCC_RCC_CRRCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long HSI48ON : 1;
    unsigned long HSI48RDY : 1;
    unsigned long Res0 : 5;
    unsigned long HSI48CAL : 9;
    unsigned long Res1 : 16;
} sSTM32G431_RCC_RCC_CRRCR;

typedef union {
    sSTM32G431_RCC_RCC_CRRCR Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CRRCR;

#define STM32G431_RCC_RCC_CCIPR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long I2C4SEL : 2;
    unsigned long Res0 : 18;
    unsigned long QSPISEL : 2;
    unsigned long Res1 : 10;
} sSTM32G431_RCC_RCC_CCIPR2;

typedef union {
    sSTM32G431_RCC_RCC_CCIPR2 Bit;
    unsigned long  All;
} uSTM32G431_RCC_RCC_CCIPR2;

typedef struct {
    uSTM32G431_RCC_RCC_CR STM32G431_RCC_RCC_CR; // Offset: 0x0
    uSTM32G431_RCC_RCC_ICSCR STM32G431_RCC_RCC_ICSCR; // Offset: 0x4
    uSTM32G431_RCC_RCC_CFGR STM32G431_RCC_RCC_CFGR; // Offset: 0x8
    uSTM32G431_RCC_RCC_PLLCFGR STM32G431_RCC_RCC_PLLCFGR; // Offset: 0xc
    unsigned long Reserved0;
    unsigned long Reserved1;
    uSTM32G431_RCC_RCC_CIER STM32G431_RCC_RCC_CIER; // Offset: 0x18
    uSTM32G431_RCC_RCC_CIFR STM32G431_RCC_RCC_CIFR; // Offset: 0x1c
    uSTM32G431_RCC_RCC_CICR STM32G431_RCC_RCC_CICR; // Offset: 0x20
    unsigned long Reserved2;
    uSTM32G431_RCC_RCC_AHB1RSTR STM32G431_RCC_RCC_AHB1RSTR; // Offset: 0x28
    uSTM32G431_RCC_RCC_AHB2RSTR STM32G431_RCC_RCC_AHB2RSTR; // Offset: 0x2c
    uSTM32G431_RCC_RCC_AHB3RSTR STM32G431_RCC_RCC_AHB3RSTR; // Offset: 0x30
    unsigned long Reserved3;
    uSTM32G431_RCC_RCC_APB1RSTR1 STM32G431_RCC_RCC_APB1RSTR1; // Offset: 0x38
    uSTM32G431_RCC_RCC_APB1RSTR2 STM32G431_RCC_RCC_APB1RSTR2; // Offset: 0x3c
    uSTM32G431_RCC_RCC_APB2RSTR STM32G431_RCC_RCC_APB2RSTR; // Offset: 0x40
    unsigned long Reserved4;
    uSTM32G431_RCC_RCC_AHB1ENR STM32G431_RCC_RCC_AHB1ENR; // Offset: 0x48
    uSTM32G431_RCC_RCC_AHB2ENR STM32G431_RCC_RCC_AHB2ENR; // Offset: 0x4c
    uSTM32G431_RCC_RCC_AHB3ENR STM32G431_RCC_RCC_AHB3ENR; // Offset: 0x50
    unsigned long Reserved5;
    uSTM32G431_RCC_RCC_APB1ENR1 STM32G431_RCC_RCC_APB1ENR1; // Offset: 0x58
    uSTM32G431_RCC_RCC_APB1ENR2 STM32G431_RCC_RCC_APB1ENR2; // Offset: 0x5c
    uSTM32G431_RCC_RCC_APB2ENR STM32G431_RCC_RCC_APB2ENR; // Offset: 0x60
    unsigned long Reserved6;
    uSTM32G431_RCC_RCC_AHB1SMENR STM32G431_RCC_RCC_AHB1SMENR; // Offset: 0x68
    uSTM32G431_RCC_RCC_AHB2SMENR STM32G431_RCC_RCC_AHB2SMENR; // Offset: 0x6c
    uSTM32G431_RCC_RCC_AHB3SMENR STM32G431_RCC_RCC_AHB3SMENR; // Offset: 0x70
    unsigned long Reserved7;
    uSTM32G431_RCC_RCC_APB1SMENR1 STM32G431_RCC_RCC_APB1SMENR1; // Offset: 0x78
    uSTM32G431_RCC_RCC_APB1SMENR2 STM32G431_RCC_RCC_APB1SMENR2; // Offset: 0x7c
    uSTM32G431_RCC_RCC_APB2SMENR STM32G431_RCC_RCC_APB2SMENR; // Offset: 0x80
    unsigned long Reserved8;
    uSTM32G431_RCC_RCC_CCIPR STM32G431_RCC_RCC_CCIPR; // Offset: 0x88
    unsigned long Reserved9;
    uSTM32G431_RCC_RCC_BDCR STM32G431_RCC_RCC_BDCR; // Offset: 0x90
    uSTM32G431_RCC_RCC_CSR STM32G431_RCC_RCC_CSR; // Offset: 0x94
    uSTM32G431_RCC_RCC_CRRCR STM32G431_RCC_RCC_CRRCR; // Offset: 0x98
    uSTM32G431_RCC_RCC_CCIPR2 STM32G431_RCC_RCC_CCIPR2; // Offset: 0x9c
} sSTM32G431_RCC;

