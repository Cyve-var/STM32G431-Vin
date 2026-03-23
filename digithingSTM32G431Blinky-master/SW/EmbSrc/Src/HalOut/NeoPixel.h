/*
 * NeoPixel.h
 *
 *  Created on: 19 Mar 2026
 *      Author: vince
 */

#ifndef SRC_HALOUT_NEOPIXEL_H_
#define SRC_HALOUT_NEOPIXEL_H_

#define NEOPIXEL_NUM_PIXEL_IN_MATRIX 64
#define NEOPIXEL_LED_PER_PIXEL 3
#define NEOPIXEL_BITS_PER_LED 8
#define NEO_PIXEL_TIME_RESET 50
#define NEOPIXEL_DATA_SIZE_RAW (NEOPIXEL_NUM_PIXEL_IN_MATRIX * NEOPIXEL_BITS_PER_LED * NEOPIXEL_LED_PER_PIXEL)

typedef struct{
	unsigned char NeoPixelBitsGreen[NEOPIXEL_BITS_PER_LED];
	unsigned char NeoPixelBitsRed[NEOPIXEL_BITS_PER_LED];
	unsigned char NeoPixelBitsBlue[NEOPIXEL_BITS_PER_LED];
} tNeoPixelProtocolGrb;

typedef union {
	tNeoPixelProtocolGrb  NeoPixelDtaGrb[NEOPIXEL_NUM_PIXEL_IN_MATRIX];
	unsigned char NeoPixelData[NEOPIXEL_DATA_SIZE_RAW+NEO_PIXEL_TIME_RESET];
} uNeoPixelProtocol;

void NeoPixelInit(void);
void NeoPixelMain(void);
uNeoPixelProtocol * pNeoPixelGetProtocolData(void);


#endif // SRC_HALOUT_NEOPIXEL_H_
