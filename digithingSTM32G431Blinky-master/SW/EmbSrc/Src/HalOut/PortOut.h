typedef enum {PORT_OUT_PORT_LOW, PORT_OUT_PORT_HIGH}
ePortOutState;


ePortOutState PortOutGetStatePA8(void);
ePortOutState PortOutGetStatePB6(void);

// Leds from switchled.c
ePortOutState PortOutGetStatePA9(void);
ePortOutState PortOutGetStatePA10(void);
ePortOutState PortOutGetStatePA12(void);
ePortOutState PortOutGetStatePA15(void);
