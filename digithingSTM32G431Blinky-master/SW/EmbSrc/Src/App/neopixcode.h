/*
 * neopixcode.h
 *
 *  Created on: 19 Mar 2026
 *      Author: vince
 */

#ifndef SRC_APP_NEOPIXCODE_H_
#define SRC_APP_NEOPIXCODE_H_

typedef struct {
	unsigned char LedGreen;
	unsigned char LedRed;
	unsigned char LedBlue;
} tLedPixel;

// Voller Frame: 8x8 = 64 Pixel
typedef struct {
	tLedPixel Pixel[64];
} tLedMatrix;

void LedMatrixInit(void);
void LedMatrixMain(void);
const tLedMatrix* LedMatrixGetMatrix(void);
unsigned char LedMatrixGetBrightness(void);


#endif /* SRC_APP_NEOPIXCODE_H_ */

