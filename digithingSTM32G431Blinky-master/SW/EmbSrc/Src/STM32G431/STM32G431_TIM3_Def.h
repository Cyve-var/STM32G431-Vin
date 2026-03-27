// Base Addres of TIM3 = 0x40000400

#define STM32G431_TIM3_CR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CEN : 1;
    unsigned long UDIS : 1;
    unsigned long URS : 1;
    unsigned long OPM : 1;
    unsigned long DIR : 1;
    unsigned long CMS : 2;
    unsigned long ARPE : 1;
    unsigned long CKD : 2;
    unsigned long Res0 : 1;
    unsigned long UIFREMAP : 1;
    unsigned long DITHEN : 1;
    unsigned long Res1 : 19;
} sSTM32G431_TIM3_CR1;

typedef union {
    sSTM32G431_TIM3_CR1 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CR1;

#define STM32G431_TIM3_CR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCPC : 1;
    unsigned long Res0 : 1;
    unsigned long CCUS : 1;
    unsigned long CCDS : 1;
    unsigned long MMS : 3;
    unsigned long TI1S : 1;
    unsigned long OIS1 : 1;
    unsigned long OIS1N : 1;
    unsigned long OIS2 : 1;
    unsigned long OIS2N : 1;
    unsigned long OIS3 : 1;
    unsigned long OIS3N : 1;
    unsigned long OIS4 : 1;
    unsigned long OIS4N : 1;
    unsigned long OIS5 : 1;
    unsigned long Res1 : 1;
    unsigned long OIS6 : 1;
    unsigned long Res2 : 1;
    unsigned long MMS2 : 4;
    unsigned long Res3 : 1;
    unsigned long MMS_3 : 1;
    unsigned long Res4 : 6;
} sSTM32G431_TIM3_CR2;

typedef union {
    sSTM32G431_TIM3_CR2 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CR2;

#define STM32G431_TIM3_SMCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SMS : 3;
    unsigned long OCCS : 1;
    unsigned long TS : 3;
    unsigned long MSM : 1;
    unsigned long ETF : 4;
    unsigned long ETPS : 2;
    unsigned long ECE : 1;
    unsigned long ETP : 1;
    unsigned long SMS_3 : 1;
    unsigned long Res0 : 3;
    unsigned long TS_4_3 : 2;
    unsigned long Res1 : 2;
    unsigned long SMSPE : 1;
    unsigned long SMSPS : 1;
    unsigned long Res2 : 6;
} sSTM32G431_TIM3_SMCR;

typedef union {
    sSTM32G431_TIM3_SMCR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_SMCR;

#define STM32G431_TIM3_DIER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long UIE : 1;
    unsigned long CC1IE : 1;
    unsigned long CC2IE : 1;
    unsigned long CC3IE : 1;
    unsigned long CC4IE : 1;
    unsigned long COMIE : 1;
    unsigned long TIE : 1;
    unsigned long BIE : 1;
    unsigned long UDE : 1;
    unsigned long CC1DE : 1;
    unsigned long CC2DE : 1;
    unsigned long CC3DE : 1;
    unsigned long CC4DE : 1;
    unsigned long COMDE : 1;
    unsigned long TDE : 1;
    unsigned long Res0 : 5;
    unsigned long IDXIE : 1;
    unsigned long DIRIE : 1;
    unsigned long IERRIE : 1;
    unsigned long TERRIE : 1;
    unsigned long Res1 : 8;
} sSTM32G431_TIM3_DIER;

typedef union {
    sSTM32G431_TIM3_DIER Bit;
    unsigned long  All;
} uSTM32G431_TIM3_DIER;

#define STM32G431_TIM3_SR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long UIF : 1;
    unsigned long CC1IF : 1;
    unsigned long CC2IF : 1;
    unsigned long CC3IF : 1;
    unsigned long CC4IF : 1;
    unsigned long COMIF : 1;
    unsigned long TIF : 1;
    unsigned long BIF : 1;
    unsigned long B2IF : 1;
    unsigned long CC1OF : 1;
    unsigned long CC2OF : 1;
    unsigned long CC3OF : 1;
    unsigned long CC4OF : 1;
    unsigned long SBIF : 1;
    unsigned long Res0 : 2;
    unsigned long CC5IF : 1;
    unsigned long CC6IF : 1;
    unsigned long Res1 : 2;
    unsigned long IDXF : 1;
    unsigned long DIRF : 1;
    unsigned long IERRF : 1;
    unsigned long TERRF : 1;
    unsigned long Res2 : 8;
} sSTM32G431_TIM3_SR;

typedef union {
    sSTM32G431_TIM3_SR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_SR;

#define STM32G431_TIM3_EGR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long UG : 1;
    unsigned long CC1G : 1;
    unsigned long CC2G : 1;
    unsigned long CC3G : 1;
    unsigned long CC4G : 1;
    unsigned long COMG : 1;
    unsigned long TG : 1;
    unsigned long BG : 1;
    unsigned long B2G : 1;
    unsigned long Res0 : 23;
} sSTM32G431_TIM3_EGR;

typedef union {
    sSTM32G431_TIM3_EGR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_EGR;

#define STM32G431_TIM3_CCMR1_Output_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC1S : 2;
    unsigned long OC1FE : 1;
    unsigned long OC1PE : 1;
    unsigned long OC1M : 3;
    unsigned long OC1CE : 1;
    unsigned long CC2S : 2;
    unsigned long OC2FE : 1;
    unsigned long OC2PE : 1;
    unsigned long OC2M : 3;
    unsigned long OC2CE : 1;
    unsigned long OC1M_3 : 1;
    unsigned long Res0 : 7;
    unsigned long OC2M_3 : 1;
    unsigned long Res1 : 7;
} sSTM32G431_TIM3_CCMR1_Output;

typedef union {
    sSTM32G431_TIM3_CCMR1_Output Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCMR1_Output;

#define STM32G431_TIM3_CCMR1_Input_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC1S : 2;
    unsigned long ICPCS : 2;
    unsigned long IC1F : 4;
    unsigned long CC2S : 2;
    unsigned long IC2PSC : 2;
    unsigned long IC2F : 4;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_CCMR1_Input;

typedef union {
    sSTM32G431_TIM3_CCMR1_Input Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCMR1_Input;

#define STM32G431_TIM3_CCMR2_Output_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC3S : 2;
    unsigned long OC3FE : 1;
    unsigned long OC3PE : 1;
    unsigned long OC3M : 3;
    unsigned long OC3CE : 1;
    unsigned long CC4S : 2;
    unsigned long OC4FE : 1;
    unsigned long OC4PE : 1;
    unsigned long OC4M : 3;
    unsigned long OC4CE : 1;
    unsigned long OC3M_3 : 1;
    unsigned long Res0 : 7;
    unsigned long OC4M_3 : 1;
    unsigned long Res1 : 7;
} sSTM32G431_TIM3_CCMR2_Output;

typedef union {
    sSTM32G431_TIM3_CCMR2_Output Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCMR2_Output;

#define STM32G431_TIM3_CCMR2_Input_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC3S : 2;
    unsigned long IC3PSC : 2;
    unsigned long IC3F : 4;
    unsigned long CC4S : 2;
    unsigned long IC4PSC : 2;
    unsigned long IC4F : 4;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_CCMR2_Input;

typedef union {
    sSTM32G431_TIM3_CCMR2_Input Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCMR2_Input;

#define STM32G431_TIM3_CCER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CC1E : 1;
    unsigned long CC1P : 1;
    unsigned long CC1NE : 1;
    unsigned long CC1NP : 1;
    unsigned long CC2E : 1;
    unsigned long CC2P : 1;
    unsigned long CC2NE : 1;
    unsigned long CC2NP : 1;
    unsigned long CC3E : 1;
    unsigned long CC3P : 1;
    unsigned long CC3NE : 1;
    unsigned long CC3NP : 1;
    unsigned long CC4E : 1;
    unsigned long CC4P : 1;
    unsigned long CC4NE : 1;
    unsigned long CC4NP : 1;
    unsigned long CC5E : 1;
    unsigned long CC5P : 1;
    unsigned long Res0 : 2;
    unsigned long CC6E : 1;
    unsigned long CC6P : 1;
    unsigned long Res1 : 10;
} sSTM32G431_TIM3_CCER;

typedef union {
    sSTM32G431_TIM3_CCER Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCER;

#define STM32G431_TIM3_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 16;
    unsigned long Res0 : 15;
    unsigned long UIFCPY : 1;
} sSTM32G431_TIM3_CNT;

typedef union {
    sSTM32G431_TIM3_CNT Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CNT;

#define STM32G431_TIM3_PSC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PSC : 16;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_PSC;

typedef union {
    sSTM32G431_TIM3_PSC Bit;
    unsigned long  All;
} uSTM32G431_TIM3_PSC;

#define STM32G431_TIM3_ARR_RESET_VALUE 0x0000FFFF
typedef struct {
    unsigned long ARR : 20; // from 20 to 16 test
    unsigned long Res0 : 12;
} sSTM32G431_TIM3_ARR;

typedef union {
    sSTM32G431_TIM3_ARR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_ARR;

#define STM32G431_TIM3_RCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REP : 16;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_RCR;

typedef union {
    sSTM32G431_TIM3_RCR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_RCR;

#define STM32G431_TIM3_CCR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR1 : 16;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_CCR1;

typedef union {
    sSTM32G431_TIM3_CCR1 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCR1;

#define STM32G431_TIM3_CCR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR2 : 16;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_CCR2;

typedef union {
    sSTM32G431_TIM3_CCR2 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCR2;

#define STM32G431_TIM3_CCR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR3 : 16;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_CCR3;

typedef union {
    sSTM32G431_TIM3_CCR3 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCR3;

#define STM32G431_TIM3_CCR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR4 : 16;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_CCR4;

typedef union {
    sSTM32G431_TIM3_CCR4 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCR4;

#define STM32G431_TIM3_BDTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DTG : 8;
    unsigned long LOCK : 2;
    unsigned long OSSI : 1;
    unsigned long OSSR : 1;
    unsigned long BKE : 1;
    unsigned long BKP : 1;
    unsigned long AOE : 1;
    unsigned long MOE : 1;
    unsigned long BKF : 4;
    unsigned long BK2F : 4;
    unsigned long BK2E : 1;
    unsigned long BK2P : 1;
    unsigned long BKDSRM : 1;
    unsigned long BK2DSRM : 1;
    unsigned long BKBID : 1;
    unsigned long BK2ID : 1;
    unsigned long Res0 : 2;
} sSTM32G431_TIM3_BDTR;

typedef union {
    sSTM32G431_TIM3_BDTR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_BDTR;

#define STM32G431_TIM3_CCR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR5 : 16;
    unsigned long Res0 : 13;
    unsigned long GC5C1 : 1;
    unsigned long GC5C2 : 1;
    unsigned long GC5C3 : 1;
} sSTM32G431_TIM3_CCR5;

typedef union {
    sSTM32G431_TIM3_CCR5 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCR5;

#define STM32G431_TIM3_CCR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCR6 : 16;
    unsigned long Res0 : 16;
} sSTM32G431_TIM3_CCR6;

typedef union {
    sSTM32G431_TIM3_CCR6 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCR6;

#define STM32G431_TIM3_CCMR3_Output_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long OC5FE : 1;
    unsigned long OC5PE : 1;
    unsigned long OC5M : 3;
    unsigned long OC5CE : 1;
    unsigned long Res1 : 2;
    unsigned long OC6FE : 1;
    unsigned long OC6PE : 1;
    unsigned long OC6M : 3;
    unsigned long OC6CE : 1;
    unsigned long OC5M_bit3 : 3;
    unsigned long Res2 : 5;
    unsigned long OC6M_bit3 : 1;
    unsigned long Res3 : 7;
} sSTM32G431_TIM3_CCMR3_Output;

typedef union {
    sSTM32G431_TIM3_CCMR3_Output Bit;
    unsigned long  All;
} uSTM32G431_TIM3_CCMR3_Output;

#define STM32G431_TIM3_DTR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DTGF : 8;
    unsigned long Res0 : 8;
    unsigned long DTAE : 1;
    unsigned long DTPE : 1;
    unsigned long Res1 : 14;
} sSTM32G431_TIM3_DTR2;

typedef union {
    sSTM32G431_TIM3_DTR2 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_DTR2;

#define STM32G431_TIM3_ECR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IE : 1;
    unsigned long IDIR : 2;
    unsigned long IBLK : 2;
    unsigned long FIDX : 1;
    unsigned long IPOS : 2;
    unsigned long Res0 : 8;
    unsigned long PW : 8;
    unsigned long PWPRSC : 3;
    unsigned long Res1 : 5;
} sSTM32G431_TIM3_ECR;

typedef union {
    sSTM32G431_TIM3_ECR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_ECR;

#define STM32G431_TIM3_TISEL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TI1SEL : 4;
    unsigned long Res0 : 4;
    unsigned long TI2SEL : 4;
    unsigned long Res1 : 4;
    unsigned long TI3SEL : 4;
    unsigned long Res2 : 4;
    unsigned long TI4SEL : 4;
    unsigned long Res3 : 4;
} sSTM32G431_TIM3_TISEL;

typedef union {
    sSTM32G431_TIM3_TISEL Bit;
    unsigned long  All;
} uSTM32G431_TIM3_TISEL;

#define STM32G431_TIM3_AF1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKINE : 1;
    unsigned long BKCMP1E : 1;
    unsigned long BKCMP2E : 1;
    unsigned long BKCMP3E : 1;
    unsigned long BKCMP4E : 1;
    unsigned long BKCMP5E : 1;
    unsigned long BKCMP6E : 1;
    unsigned long BKCMP7E : 1;
    unsigned long Res0 : 1;
    unsigned long BKINP : 1;
    unsigned long BKCMP1P : 1;
    unsigned long BKCMP2P : 1;
    unsigned long BKCMP3P : 1;
    unsigned long BKCMP4P : 1;
    unsigned long ETRSEL : 4;
    unsigned long Res1 : 14;
} sSTM32G431_TIM3_AF1;

typedef union {
    sSTM32G431_TIM3_AF1 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_AF1;

#define STM32G431_TIM3_AF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BKINE : 1;
    unsigned long BK2CMP1E : 1;
    unsigned long BK2CMP2E : 1;
    unsigned long BK2CMP3E : 1;
    unsigned long BK2CMP4E : 1;
    unsigned long BK2CMP5E : 1;
    unsigned long BK2CMP6E : 1;
    unsigned long BK2CMP7E : 1;
    unsigned long Res0 : 1;
    unsigned long BK2INP : 1;
    unsigned long BK2CMP1P : 1;
    unsigned long BK2CMP2P : 1;
    unsigned long BK2CMP3P : 1;
    unsigned long BK2CMP4P : 1;
    unsigned long Res1 : 2;
    unsigned long OCRSEL : 3;
    unsigned long Res2 : 13;
} sSTM32G431_TIM3_AF2;

typedef union {
    sSTM32G431_TIM3_AF2 Bit;
    unsigned long  All;
} uSTM32G431_TIM3_AF2;

#define STM32G431_TIM3_DCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DBA : 5;
    unsigned long Res0 : 3;
    unsigned long DBL : 5;
    unsigned long Res1 : 19;
} sSTM32G431_TIM3_DCR;

typedef union {
    sSTM32G431_TIM3_DCR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_DCR;

#define STM32G431_TIM3_DMAR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DMAB : 32;
} sSTM32G431_TIM3_DMAR;

typedef union {
    sSTM32G431_TIM3_DMAR Bit;
    unsigned long  All;
} uSTM32G431_TIM3_DMAR;

typedef struct {
    uSTM32G431_TIM3_CR1 STM32G431_TIM3_CR1; // Offset: 0x0
    uSTM32G431_TIM3_CR2 STM32G431_TIM3_CR2; // Offset: 0x4
    uSTM32G431_TIM3_SMCR STM32G431_TIM3_SMCR; // Offset: 0x8
    uSTM32G431_TIM3_DIER STM32G431_TIM3_DIER; // Offset: 0xc
    uSTM32G431_TIM3_SR STM32G431_TIM3_SR; // Offset: 0x10
    uSTM32G431_TIM3_EGR STM32G431_TIM3_EGR; // Offset: 0x14
    uSTM32G431_TIM3_CCMR1_Output STM32G431_TIM3_CCMR1_Output; // Offset: 0x18
    uSTM32G431_TIM3_CCMR1_Input STM32G431_TIM3_CCMR1_Input; // Offset: 0x18
    uSTM32G431_TIM3_CCMR2_Output STM32G431_TIM3_CCMR2_Output; // Offset: 0x1c
    uSTM32G431_TIM3_CCMR2_Input STM32G431_TIM3_CCMR2_Input; // Offset: 0x1c
    uSTM32G431_TIM3_CCER STM32G431_TIM3_CCER; // Offset: 0x20
    uSTM32G431_TIM3_CNT STM32G431_TIM3_CNT; // Offset: 0x24
    uSTM32G431_TIM3_PSC STM32G431_TIM3_PSC; // Offset: 0x28
    uSTM32G431_TIM3_ARR STM32G431_TIM3_ARR; // Offset: 0x2C
    unsigned long Reserved0; // 0x30
    uSTM32G431_TIM3_CCR1 STM32G431_TIM3_CCR1; // Offset: 0x34
    uSTM32G431_TIM3_CCR2 STM32G431_TIM3_CCR2; // Offset: 0x38
    uSTM32G431_TIM3_CCR3 STM32G431_TIM3_CCR3; // Offset: 0x3c
    uSTM32G431_TIM3_CCR4 STM32G431_TIM3_CCR4; // Offset: 0x40
    unsigned long Reserved1; // 0x44
	unsigned long Reserved2; // 0x48
	unsigned long Reserved3; // 0x4C
	unsigned long Reserved4; // 0x50
	unsigned long Reserved5; // 0x54
	uSTM32G431_TIM3_ECR STM32G431_TIM3_ECR; // Offset: 0x58
	uSTM32G431_TIM3_TISEL STM32G431_TIM3_TISEL; // Offset: 0x5c
	uSTM32G431_TIM3_AF1 STM32G431_TIM3_AF1; // Offset: 0x60
	uSTM32G431_TIM3_AF2 STM32G431_TIM3_AF2; // Offset: 0x64
	unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    unsigned long Reserved16;
    unsigned long Reserved17;
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    unsigned long Reserved21;
    unsigned long Reserved22;
    unsigned long Reserved23;
    unsigned long Reserved24;
    unsigned long Reserved25;
    unsigned long Reserved26;
    unsigned long Reserved27;
    unsigned long Reserved28;
    unsigned long Reserved29;
    unsigned long Reserved30;
    unsigned long Reserved31;
    unsigned long Reserved32;
    unsigned long Reserved33;
    unsigned long Reserved34;
    unsigned long Reserved35;
    unsigned long Reserved36;
    unsigned long Reserved37;
    unsigned long Reserved38;
    unsigned long Reserved39;
    unsigned long Reserved40;
    unsigned long Reserved41;
    unsigned long Reserved42;
    unsigned long Reserved43;
    unsigned long Reserved44;
    unsigned long Reserved45;
    unsigned long Reserved46;
    unsigned long Reserved47;
    unsigned long Reserved48;
    unsigned long Reserved49;
    unsigned long Reserved50;
    unsigned long Reserved51;
    unsigned long Reserved52;
    unsigned long Reserved53;
    unsigned long Reserved54;
    unsigned long Reserved55;
    unsigned long Reserved56;
    unsigned long Reserved57;
    unsigned long Reserved58;
    unsigned long Reserved59;
    unsigned long Reserved60;
    unsigned long Reserved61;
    unsigned long Reserved62;
    unsigned long Reserved63;
    unsigned long Reserved64;
    unsigned long Reserved65;
    unsigned long Reserved66;
    unsigned long Reserved67;
    unsigned long Reserved68;
    unsigned long Reserved69;
    unsigned long Reserved70;
    unsigned long Reserved71;
    unsigned long Reserved72;
    unsigned long Reserved73;
    unsigned long Reserved74;
    unsigned long Reserved75;
    unsigned long Reserved76;
    unsigned long Reserved77;
    unsigned long Reserved78;
    unsigned long Reserved79;
    unsigned long Reserved80;
    unsigned long Reserved81;
    unsigned long Reserved82;
    unsigned long Reserved83;
    unsigned long Reserved84;
    unsigned long Reserved85;
    unsigned long Reserved86;
    unsigned long Reserved87;
    unsigned long Reserved88;
    unsigned long Reserved89;
    unsigned long Reserved90;
    unsigned long Reserved91;
    unsigned long Reserved92;
    unsigned long Reserved93;
    unsigned long Reserved94;
    unsigned long Reserved95;
    unsigned long Reserved96;
    unsigned long Reserved97;
    unsigned long Reserved98;
    unsigned long Reserved99;
    unsigned long Reserved100;
    unsigned long Reserved101;
    unsigned long Reserved102;
    unsigned long Reserved103;
    unsigned long Reserved104;
    unsigned long Reserved105;
    unsigned long Reserved106;
    unsigned long Reserved107;
    unsigned long Reserved108;
    unsigned long Reserved109;
    unsigned long Reserved110;
    unsigned long Reserved111;
    unsigned long Reserved112;
    unsigned long Reserved113;
    unsigned long Reserved114;
    unsigned long Reserved115;
    unsigned long Reserved116;
    unsigned long Reserved117;
    unsigned long Reserved118;
    unsigned long Reserved119;
    unsigned long Reserved120;
    unsigned long Reserved121;
    unsigned long Reserved122;
    unsigned long Reserved123;
    unsigned long Reserved124;
    unsigned long Reserved125;
    unsigned long Reserved126;
    unsigned long Reserved127;
    unsigned long Reserved128;
    unsigned long Reserved129;
    unsigned long Reserved130;
    unsigned long Reserved131;
    unsigned long Reserved132;
    unsigned long Reserved133;
    unsigned long Reserved134;
    unsigned long Reserved135;
    unsigned long Reserved136;
    unsigned long Reserved137;
    unsigned long Reserved138;
    unsigned long Reserved139;
    unsigned long Reserved140;
    unsigned long Reserved141;
    unsigned long Reserved142;
    unsigned long Reserved143;
    unsigned long Reserved144;
    unsigned long Reserved145;
    unsigned long Reserved146;
    unsigned long Reserved147;
    unsigned long Reserved148;
    unsigned long Reserved149;
    unsigned long Reserved150;
    unsigned long Reserved151;
    unsigned long Reserved152;
    unsigned long Reserved153;
    unsigned long Reserved154;
    unsigned long Reserved155;
    unsigned long Reserved156;
    unsigned long Reserved157;
    unsigned long Reserved158;
    unsigned long Reserved159;
    unsigned long Reserved160;
    unsigned long Reserved161;
    unsigned long Reserved162;
    unsigned long Reserved163;
    unsigned long Reserved164;
    unsigned long Reserved165;
    unsigned long Reserved166;
    unsigned long Reserved167;
    unsigned long Reserved168;
    unsigned long Reserved169;
    unsigned long Reserved170;
    unsigned long Reserved171;
    unsigned long Reserved172;
    unsigned long Reserved173;
    unsigned long Reserved174;
    unsigned long Reserved175;
    unsigned long Reserved176;
    unsigned long Reserved177;
    unsigned long Reserved178;
    unsigned long Reserved179;
    unsigned long Reserved180;
    unsigned long Reserved181;
    unsigned long Reserved182;
    unsigned long Reserved183;
    unsigned long Reserved184;
    unsigned long Reserved185;
    unsigned long Reserved186;
    unsigned long Reserved187;
    unsigned long Reserved188;
    unsigned long Reserved189;
    unsigned long Reserved190;
    unsigned long Reserved191;
    unsigned long Reserved192;
    unsigned long Reserved193;
    unsigned long Reserved194;
    unsigned long Reserved195;
    unsigned long Reserved196;
    unsigned long Reserved197;
    unsigned long Reserved198;
    unsigned long Reserved199;
    unsigned long Reserved200;
    unsigned long Reserved201;
    unsigned long Reserved202;
    unsigned long Reserved203;
    unsigned long Reserved204;
    unsigned long Reserved205;
    unsigned long Reserved206;
    unsigned long Reserved207;
    unsigned long Reserved208;
    unsigned long Reserved209;
    unsigned long Reserved210;
    unsigned long Reserved211;
    unsigned long Reserved212;
    unsigned long Reserved213;
    unsigned long Reserved214;
    unsigned long Reserved215;
    unsigned long Reserved216;
    unsigned long Reserved217;
    unsigned long Reserved218;
    unsigned long Reserved219;
    unsigned long Reserved220;
    uSTM32G431_TIM3_DCR STM32G431_TIM3_DCR; // Offset: 0x3DC
    uSTM32G431_TIM3_DMAR STM32G431_TIM3_DMAR; // Offset: 0x3E0

} sSTM32G431_TIM3;

