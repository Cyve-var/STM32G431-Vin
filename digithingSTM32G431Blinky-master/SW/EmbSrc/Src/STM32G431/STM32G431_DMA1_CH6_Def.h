// Base Addres of DMA1_CH6 = 0x40020000

#define STM32G431_DMA1_CH6_ISR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long GIF1 : 1;
    unsigned long TCIF1 : 1;
    unsigned long HTIF1 : 1;
    unsigned long TEIF1 : 1;
    unsigned long GIF2 : 1;
    unsigned long TCIF2 : 1;
    unsigned long HTIF2 : 1;
    unsigned long TEIF2 : 1;
    unsigned long GIF3 : 1;
    unsigned long TCIF3 : 1;
    unsigned long HTIF3 : 1;
    unsigned long TEIF3 : 1;
    unsigned long GIF4 : 1;
    unsigned long TCIF4 : 1;
    unsigned long HTIF4 : 1;
    unsigned long TEIF4 : 1;
    unsigned long GIF5 : 1;
    unsigned long TCIF5 : 1;
    unsigned long HTIF5 : 1;
    unsigned long TEIF5 : 1;
    unsigned long GIF6 : 1;
    unsigned long TCIF6 : 1;
    unsigned long HTIF6 : 1;
    unsigned long TEIF6 : 1;
    unsigned long GIF7 : 1;
    unsigned long TCIF7 : 1;
    unsigned long HTIF7 : 1;
    unsigned long TEIF7 : 1;
    unsigned long GIF8 : 1;
    unsigned long TCIF8 : 1;
    unsigned long HTIF8 : 1;
    unsigned long TEIF8 : 1;
} sSTM32G431_DMA1_CH6_ISR;

typedef union {
    sSTM32G431_DMA1_CH6_ISR Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_ISR;

#define STM32G431_DMA1_CH6_IFCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long GIF1 : 1;
    unsigned long TCIF1 : 1;
    unsigned long HTIF1 : 1;
    unsigned long TEIF1 : 1;
    unsigned long GIF2 : 1;
    unsigned long TCIF2 : 1;
    unsigned long HTIF2 : 1;
    unsigned long TEIF2 : 1;
    unsigned long GIF3 : 1;
    unsigned long TCIF3 : 1;
    unsigned long HTIF3 : 1;
    unsigned long TEIF3 : 1;
    unsigned long GIF4 : 1;
    unsigned long TCIF4 : 1;
    unsigned long HTIF4 : 1;
    unsigned long TEIF4 : 1;
    unsigned long GIF5 : 1;
    unsigned long TCIF5 : 1;
    unsigned long HTIF5 : 1;
    unsigned long TEIF5 : 1;
    unsigned long GIF6 : 1;
    unsigned long TCIF6 : 1;
    unsigned long HTIF6 : 1;
    unsigned long TEIF6 : 1;
    unsigned long GIF7 : 1;
    unsigned long TCIF7 : 1;
    unsigned long HTIF7 : 1;
    unsigned long TEIF7 : 1;
    unsigned long GIF8 : 1;
    unsigned long TCIF8 : 1;
    unsigned long HTIF8 : 1;
    unsigned long TEIF8 : 1;
} sSTM32G431_DMA1_CH6_IFCR;

typedef union {
    sSTM32G431_DMA1_CH6_IFCR Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_IFCR;

#define STM32G431_DMA1_CH6_CCR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32G431_DMA1_CH6_CCR1;

typedef union {
    sSTM32G431_DMA1_CH6_CCR1 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CCR1;

#define STM32G431_DMA1_CH6_CCR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32G431_DMA1_CH6_CCR2;

typedef union {
    sSTM32G431_DMA1_CH6_CCR2 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CCR2;

#define STM32G431_DMA1_CH6_CCR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32G431_DMA1_CH6_CCR3;

typedef union {
    sSTM32G431_DMA1_CH6_CCR3 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CCR3;

#define STM32G431_DMA1_CH6_CCR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32G431_DMA1_CH6_CCR4;

typedef union {
    sSTM32G431_DMA1_CH6_CCR4 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CCR4;

#define STM32G431_DMA1_CH6_CCR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32G431_DMA1_CH6_CCR5;

typedef union {
    sSTM32G431_DMA1_CH6_CCR5 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CCR5;

#define STM32G431_DMA1_CH6_CCR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32G431_DMA1_CH6_CCR6;

typedef union {
    sSTM32G431_DMA1_CH6_CCR6 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CCR6;

#define STM32G431_DMA1_CH6_CCR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32G431_DMA1_CH6_CCR7;

typedef union {
    sSTM32G431_DMA1_CH6_CCR7 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CCR7;

#define STM32G431_DMA1_CH6_CCR8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long TCIE : 1;
    unsigned long HTIE : 1;
    unsigned long TEIE : 1;
    unsigned long DIR : 1;
    unsigned long CIRC : 1;
    unsigned long PINC : 1;
    unsigned long MINC : 1;
    unsigned long PSIZE : 2;
    unsigned long MSIZE : 2;
    unsigned long PL : 2;
    unsigned long MEM2MEM : 1;
    unsigned long Res0 : 17;
} sSTM32G431_DMA1_CH6_CCR8;

typedef union {
    sSTM32G431_DMA1_CH6_CCR8 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CCR8;

#define STM32G431_DMA1_CH6_CNDTR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32G431_DMA1_CH6_CNDTR1;

typedef union {
    sSTM32G431_DMA1_CH6_CNDTR1 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CNDTR1;

#define STM32G431_DMA1_CH6_CNDTR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32G431_DMA1_CH6_CNDTR2;

typedef union {
    sSTM32G431_DMA1_CH6_CNDTR2 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CNDTR2;

#define STM32G431_DMA1_CH6_CNDTR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32G431_DMA1_CH6_CNDTR3;

typedef union {
    sSTM32G431_DMA1_CH6_CNDTR3 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CNDTR3;

#define STM32G431_DMA1_CH6_CNDTR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32G431_DMA1_CH6_CNDTR4;

typedef union {
    sSTM32G431_DMA1_CH6_CNDTR4 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CNDTR4;

#define STM32G431_DMA1_CH6_CNDTR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32G431_DMA1_CH6_CNDTR5;

typedef union {
    sSTM32G431_DMA1_CH6_CNDTR5 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CNDTR5;

#define STM32G431_DMA1_CH6_CNDTR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32G431_DMA1_CH6_CNDTR6;

typedef union {
    sSTM32G431_DMA1_CH6_CNDTR6 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CNDTR6;

#define STM32G431_DMA1_CH6_CNDTR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32G431_DMA1_CH6_CNDTR7;

typedef union {
    sSTM32G431_DMA1_CH6_CNDTR7 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CNDTR7;

#define STM32G431_DMA1_CH6_CNDTR8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDT : 16;
    unsigned long Res0 : 16;
} sSTM32G431_DMA1_CH6_CNDTR8;

typedef union {
    sSTM32G431_DMA1_CH6_CNDTR8 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CNDTR8;

#define STM32G431_DMA1_CH6_CPAR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32G431_DMA1_CH6_CPAR1;

typedef union {
    sSTM32G431_DMA1_CH6_CPAR1 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CPAR1;

#define STM32G431_DMA1_CH6_CPAR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32G431_DMA1_CH6_CPAR2;

typedef union {
    sSTM32G431_DMA1_CH6_CPAR2 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CPAR2;

#define STM32G431_DMA1_CH6_CPAR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32G431_DMA1_CH6_CPAR3;

typedef union {
    sSTM32G431_DMA1_CH6_CPAR3 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CPAR3;

#define STM32G431_DMA1_CH6_CPAR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32G431_DMA1_CH6_CPAR4;

typedef union {
    sSTM32G431_DMA1_CH6_CPAR4 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CPAR4;

#define STM32G431_DMA1_CH6_CPAR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32G431_DMA1_CH6_CPAR5;

typedef union {
    sSTM32G431_DMA1_CH6_CPAR5 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CPAR5;

#define STM32G431_DMA1_CH6_CPAR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32G431_DMA1_CH6_CPAR6;

typedef union {
    sSTM32G431_DMA1_CH6_CPAR6 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CPAR6;

#define STM32G431_DMA1_CH6_CPAR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32G431_DMA1_CH6_CPAR7;

typedef union {
    sSTM32G431_DMA1_CH6_CPAR7 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CPAR7;

#define STM32G431_DMA1_CH6_CPAR8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA : 32;
} sSTM32G431_DMA1_CH6_CPAR8;

typedef union {
    sSTM32G431_DMA1_CH6_CPAR8 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CPAR8;

#define STM32G431_DMA1_CH6_CMAR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32G431_DMA1_CH6_CMAR1;

typedef union {
    sSTM32G431_DMA1_CH6_CMAR1 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CMAR1;

#define STM32G431_DMA1_CH6_CMAR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32G431_DMA1_CH6_CMAR2;

typedef union {
    sSTM32G431_DMA1_CH6_CMAR2 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CMAR2;

#define STM32G431_DMA1_CH6_CMAR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32G431_DMA1_CH6_CMAR3;

typedef union {
    sSTM32G431_DMA1_CH6_CMAR3 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CMAR3;

#define STM32G431_DMA1_CH6_CMAR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32G431_DMA1_CH6_CMAR4;

typedef union {
    sSTM32G431_DMA1_CH6_CMAR4 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CMAR4;

#define STM32G431_DMA1_CH6_CMAR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32G431_DMA1_CH6_CMAR5;

typedef union {
    sSTM32G431_DMA1_CH6_CMAR5 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CMAR5;

#define STM32G431_DMA1_CH6_CMAR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32G431_DMA1_CH6_CMAR6;

typedef union {
    sSTM32G431_DMA1_CH6_CMAR6 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CMAR6;

#define STM32G431_DMA1_CH6_CMAR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32G431_DMA1_CH6_CMAR7;

typedef union {
    sSTM32G431_DMA1_CH6_CMAR7 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CMAR7;

#define STM32G431_DMA1_CH6_CMAR8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MA : 32;
} sSTM32G431_DMA1_CH6_CMAR8;

typedef union {
    sSTM32G431_DMA1_CH6_CMAR8 Bit;
    unsigned long  All;
} uSTM32G431_DMA1_CH6_CMAR8;

typedef struct {
    uSTM32G431_DMA1_CH6_ISR STM32G431_DMA1_CH6_ISR; // Offset: 0x0
    uSTM32G431_DMA1_CH6_IFCR STM32G431_DMA1_CH6_IFCR; // Offset: 0x4
    uSTM32G431_DMA1_CH6_CCR1 STM32G431_DMA1_CH6_CCR1; // Offset: 0x8
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    uSTM32G431_DMA1_CH6_CCR2 STM32G431_DMA1_CH6_CCR2; // Offset: 0x1c
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    uSTM32G431_DMA1_CH6_CCR3 STM32G431_DMA1_CH6_CCR3; // Offset: 0x30
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    uSTM32G431_DMA1_CH6_CCR4 STM32G431_DMA1_CH6_CCR4; // Offset: 0x44
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    uSTM32G431_DMA1_CH6_CCR5 STM32G431_DMA1_CH6_CCR5; // Offset: 0x58
    unsigned long Reserved16;
    unsigned long Reserved17;
    unsigned long Reserved18;
    unsigned long Reserved19;
    uSTM32G431_DMA1_CH6_CCR6 STM32G431_DMA1_CH6_CCR6; // Offset: 0x6c
    unsigned long Reserved20;
    unsigned long Reserved21;
    unsigned long Reserved22;
    unsigned long Reserved23;
    uSTM32G431_DMA1_CH6_CCR7 STM32G431_DMA1_CH6_CCR7; // Offset: 0x80
    unsigned long Reserved24;
    unsigned long Reserved25;
    unsigned long Reserved26;
    unsigned long Reserved27;
    uSTM32G431_DMA1_CH6_CCR8 STM32G431_DMA1_CH6_CCR8; // Offset: 0x94
    uSTM32G431_DMA1_CH6_CNDTR1 STM32G431_DMA1_CH6_CNDTR1; // Offset: 0xc
    unsigned long Reserved28;
    unsigned long Reserved29;
    unsigned long Reserved30;
    unsigned long Reserved31;
    uSTM32G431_DMA1_CH6_CNDTR2 STM32G431_DMA1_CH6_CNDTR2; // Offset: 0x20
    unsigned long Reserved32;
    unsigned long Reserved33;
    unsigned long Reserved34;
    unsigned long Reserved35;
    uSTM32G431_DMA1_CH6_CNDTR3 STM32G431_DMA1_CH6_CNDTR3; // Offset: 0x34
    unsigned long Reserved36;
    unsigned long Reserved37;
    unsigned long Reserved38;
    unsigned long Reserved39;
    uSTM32G431_DMA1_CH6_CNDTR4 STM32G431_DMA1_CH6_CNDTR4; // Offset: 0x48
    unsigned long Reserved40;
    unsigned long Reserved41;
    unsigned long Reserved42;
    unsigned long Reserved43;
    uSTM32G431_DMA1_CH6_CNDTR5 STM32G431_DMA1_CH6_CNDTR5; // Offset: 0x5c
    unsigned long Reserved44;
    unsigned long Reserved45;
    unsigned long Reserved46;
    unsigned long Reserved47;
    uSTM32G431_DMA1_CH6_CNDTR6 STM32G431_DMA1_CH6_CNDTR6; // Offset: 0x70
    unsigned long Reserved48;
    unsigned long Reserved49;
    unsigned long Reserved50;
    unsigned long Reserved51;
    uSTM32G431_DMA1_CH6_CNDTR7 STM32G431_DMA1_CH6_CNDTR7; // Offset: 0x84
    unsigned long Reserved52;
    unsigned long Reserved53;
    unsigned long Reserved54;
    unsigned long Reserved55;
    uSTM32G431_DMA1_CH6_CNDTR8 STM32G431_DMA1_CH6_CNDTR8; // Offset: 0x98
    uSTM32G431_DMA1_CH6_CPAR1 STM32G431_DMA1_CH6_CPAR1; // Offset: 0x10
    unsigned long Reserved56;
    unsigned long Reserved57;
    unsigned long Reserved58;
    unsigned long Reserved59;
    uSTM32G431_DMA1_CH6_CPAR2 STM32G431_DMA1_CH6_CPAR2; // Offset: 0x24
    unsigned long Reserved60;
    unsigned long Reserved61;
    unsigned long Reserved62;
    unsigned long Reserved63;
    uSTM32G431_DMA1_CH6_CPAR3 STM32G431_DMA1_CH6_CPAR3; // Offset: 0x38
    unsigned long Reserved64;
    unsigned long Reserved65;
    unsigned long Reserved66;
    unsigned long Reserved67;
    uSTM32G431_DMA1_CH6_CPAR4 STM32G431_DMA1_CH6_CPAR4; // Offset: 0x4c
    unsigned long Reserved68;
    unsigned long Reserved69;
    unsigned long Reserved70;
    unsigned long Reserved71;
    uSTM32G431_DMA1_CH6_CPAR5 STM32G431_DMA1_CH6_CPAR5; // Offset: 0x60
    unsigned long Reserved72;
    unsigned long Reserved73;
    unsigned long Reserved74;
    unsigned long Reserved75;
    uSTM32G431_DMA1_CH6_CPAR6 STM32G431_DMA1_CH6_CPAR6; // Offset: 0x74
    unsigned long Reserved76;
    unsigned long Reserved77;
    unsigned long Reserved78;
    unsigned long Reserved79;
    uSTM32G431_DMA1_CH6_CPAR7 STM32G431_DMA1_CH6_CPAR7; // Offset: 0x88
    unsigned long Reserved80;
    unsigned long Reserved81;
    unsigned long Reserved82;
    unsigned long Reserved83;
    uSTM32G431_DMA1_CH6_CPAR8 STM32G431_DMA1_CH6_CPAR8; // Offset: 0x9c
    uSTM32G431_DMA1_CH6_CMAR1 STM32G431_DMA1_CH6_CMAR1; // Offset: 0x14
    unsigned long Reserved84;
    unsigned long Reserved85;
    unsigned long Reserved86;
    unsigned long Reserved87;
    uSTM32G431_DMA1_CH6_CMAR2 STM32G431_DMA1_CH6_CMAR2; // Offset: 0x28
    unsigned long Reserved88;
    unsigned long Reserved89;
    unsigned long Reserved90;
    unsigned long Reserved91;
    uSTM32G431_DMA1_CH6_CMAR3 STM32G431_DMA1_CH6_CMAR3; // Offset: 0x3c
    unsigned long Reserved92;
    unsigned long Reserved93;
    unsigned long Reserved94;
    unsigned long Reserved95;
    uSTM32G431_DMA1_CH6_CMAR4 STM32G431_DMA1_CH6_CMAR4; // Offset: 0x50
    unsigned long Reserved96;
    unsigned long Reserved97;
    unsigned long Reserved98;
    unsigned long Reserved99;
    uSTM32G431_DMA1_CH6_CMAR5 STM32G431_DMA1_CH6_CMAR5; // Offset: 0x64
    unsigned long Reserved100;
    unsigned long Reserved101;
    unsigned long Reserved102;
    unsigned long Reserved103;
    uSTM32G431_DMA1_CH6_CMAR6 STM32G431_DMA1_CH6_CMAR6; // Offset: 0x78
    unsigned long Reserved104;
    unsigned long Reserved105;
    unsigned long Reserved106;
    unsigned long Reserved107;
    uSTM32G431_DMA1_CH6_CMAR7 STM32G431_DMA1_CH6_CMAR7; // Offset: 0x8c
    unsigned long Reserved108;
    unsigned long Reserved109;
    unsigned long Reserved110;
    unsigned long Reserved111;
    uSTM32G431_DMA1_CH6_CMAR8 STM32G431_DMA1_CH6_CMAR8; // Offset: 0xa0
} sSTM32G431_DMA1_CH6;

