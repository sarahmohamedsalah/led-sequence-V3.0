/*
* BUTTON.c
*
* Created: 
*/


#include "BUTTON.h"


EN_buttonError_t BTN0_Init(uint8_t buttonPort, uint8_t buttonPin)
{ EN_buttonError_t error = BUTTON_OK;
	if (buttonPort > PORTD)
	{
		error = WRONG_BUTTON_PORT;
	}
	else if (buttonPin > 7)
	{
		error = WRONG_BUTTON_PIN;
	}
	else {
		DIO_SetPin_Direction(DIO_PORTD, DIO_PIN2, DIO_PIN_INPUT);
		error = BUTTON_OK;

	}
	return error;
}

EN_buttonError_t BTN0_GetValue(uint8_t buttonPort, uint8_t buttonPin){
	EN_buttonError_t error = BUTTON_OK;
	if (buttonPort > PORTD)
	{
		error = WRONG_BUTTON_PORT;
	}
	else if (buttonPin > 7)
	{
		error = WRONG_BUTTON_PIN;
	}
	else
	{
		Uint8t BTNX;

		//value = GET_BIT(PINB, PINB);
		DIO_ReadPin_Value(DIO_PORTD, DIO_PIN2, &BTNX);
		error = BUTTON_OK;
	}

	return error;
}
/*
void BTN0_Init(void)
{
	DIO_SetPin_Direction(DIO_PORTD, DIO_PIN2, DIO_PIN_INPUT);
}

Uint8t BTN0_GetValue(void)
{
	Uint8t BTNX;
	
	//value = GET_BIT(PINB, PINB0);
	DIO_ReadPin_Value(DIO_PORTD, DIO_PIN2, &BTNX);
	while(!BTNX){
	
	return BTNX;}
}*/

/*
 void  BTN0_read(Uint8t *value){
	 DIO_ReadPin_Value(DIO_PORTD, DIO_PIN2, value);
	 
 }*/