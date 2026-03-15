typedef enum {GPIO_IN_PORT_LOW, GPIO_IN_PORT_HIGH} eGpioInPortState;


eGpioInPortState GpioInGetPortB12(void);
eGpioInPortState GpioInGetPortB7(void); // button from button.c
// switches from switchled.c
eGpioInPortState GpioInGetPortB0(void);
eGpioInPortState GpioInGetPortB5(void);
eGpioInPortState GpioInGetPortB4(void);

