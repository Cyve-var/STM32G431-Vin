typedef enum {GPIO_IN_PORT_LOW, GPIO_IN_PORT_HIGH} eGpioInPortState;

// switches from switchled.c
// Switch 1
eGpioInPortState GpioInGetPortB0(void);
// Switch 2
eGpioInPortState GpioInGetPortB7(void);
// Switch 3
eGpioInPortState GpioInGetPortB5(void);
// Switch 4
eGpioInPortState GpioInGetPortA2(void);

