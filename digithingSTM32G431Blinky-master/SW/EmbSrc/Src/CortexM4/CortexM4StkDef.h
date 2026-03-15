#define BASE_ADDRESS_SYSTICK 0xE000E010

typedef struct {
	unsigned long int ENABLE : 1;
	unsigned long int TICKINT : 1;
	unsigned long int CLKSOURCE : 1;
	unsigned long int Res0 : 5;
	unsigned long int Res1 : 8;
	unsigned long int COUNTFLAG : 1;
	unsigned long int RES2 : 7;
	unsigned long int RES3 : 8;
} tSTK_CTRL;

typedef union {
	tSTK_CTRL Bit;
	unsigned long int  All;
} uSTK_CTRL;

typedef struct {
	unsigned long int RELOAD : 24;
	unsigned long int Res0 : 8;
} tSTK_LOAD;

typedef union {
	tSTK_LOAD Bit;
	unsigned long int  All;
} uSTK_LOAD;

typedef struct {
	unsigned long int CURRENT_VALUE : 24;
	unsigned long int Res0 : 8;
} tSTK_CVR;

typedef union {
	tSTK_CVR Bit;
	unsigned long int  All;
} uSTK_CVR;

typedef struct {
	uSTK_CTRL STK_CTRL;
	uSTK_LOAD STK_LOAD;
	uSTK_CVR STK_CVR;
} tCORTEX_M4_STK;