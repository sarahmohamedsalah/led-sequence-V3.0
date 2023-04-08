/*
 * BUTTON.h
 *
 * Created: 11/6/2020 12:40:34 PM
 *  Author: karim
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO.h"
#define  LOW   0
#define  HIGH  1
//void BTN0_Init(void);
//Uint8t BTN0_GetValue(void);
void BTN0_read(uint8_t buttonPort, uint8_t buttonPin,Uint8t *value);
typedef enum buttonErrors{
	BUTTON_OK,
	WRONG_BUTTON_PORT,
	WRONG_BUTTON_PIN
}EN_buttonError_t;


EN_buttonError_t BTN0_GetValue(uint8_t buttonPort, uint8_t buttonPin);
EN_buttonError_t BTN0_Init(uint8_t buttonPort, uint8_t buttonPin);
#endif /* BUTTON_H_ */