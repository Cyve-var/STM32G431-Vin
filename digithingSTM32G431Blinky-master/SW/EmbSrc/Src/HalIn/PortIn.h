
typedef enum {PORT_IN_PORT_LOW, PORT_IN_PORT_HIGH}
ePortInState;

// Switch 1
ePortInState PortInGetStatePB0(void);
// Switch 2
ePortInState PortInGetStatePB7(void);
// Switch 3
ePortInState PortInGetStatePB5(void);
// Switch 4
ePortInState PortInGetStatePA2(void);

