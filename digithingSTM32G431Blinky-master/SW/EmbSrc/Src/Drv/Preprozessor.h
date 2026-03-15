


#define ASM(x) asm(x)
#define ATTRIBUTE_SECTION(x) __attribute__ (x)
#define RAMFUNC __attribute__ ((long_call, section (".ramfunctions")))

