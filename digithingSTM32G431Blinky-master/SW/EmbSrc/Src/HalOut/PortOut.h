typedef enum {PORT_OUT_PORT_LOW, PORT_OUT_PORT_HIGH}
ePortOutState;




// Leds from switchled.c
ePortOutState PortOutGetStatePA9(void); //  Led  1
ePortOutState PortOutGetStatePA10(void); // led  2
ePortOutState PortOutGetStatePA12(void); // led  3
ePortOutState PortOutGetStatePA8(void); //  led  4
