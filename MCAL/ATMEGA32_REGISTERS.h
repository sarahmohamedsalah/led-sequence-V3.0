/*
* ATMEGA32_REGISTERS.h
*
* Created: 11/1/2020 9:33:05 PM
*  Author: karim
*/


#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_
/************************************** Libraries ***********************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
/************************************** DIO-Registers *******************************************/
#define DDRA  (*(volatile Uint8t*)(0x3A))
#define PORTA (*(volatile Uint8t*)(0x3B))
#define PINA  (*(volatile Uint8t*)(0x39))

#define DDRB  (*(volatile Uint8t*)(0x37))
#define PORTB (*(volatile Uint8t*)(0x38))
#define PINB  (*(volatile Uint8t*)(0x36))

#define DDRC  (*(volatile Uint8t*)(0x34))
#define PORTC (*(volatile Uint8t*)(0x35))
#define PINC  (*(volatile Uint8t*)(0x33))

#define DDRD  (*(volatile Uint8t*)(0x31))
#define PORTD (*(volatile Uint8t*)(0x32))
#define PIND  (*(volatile Uint8t*)(0x30))
/************************************** ADC-Registers *******************************************/
#define ADMUX   (*(volatile Uint8t*) (0x27))
#define ADCSRA  (*(volatile Uint8t*) (0x26))
#define ADCH    (*(volatile Uint8t*) (0x25))
#define ADCL    (*(volatile Uint8t*) (0x24))
#define SFIOR   (*(volatile Uint8t*) (0x50))
#define ADC_DTA (*(volatile Uint16t*)(0x24))
/**********************************************intrrput register**************************************************/
#define SREG (*(volatile Uint16t*)(0x5f))
#define MCUCR (*(volatile Uint16t*)(0x55))
#define MCUCR (*(volatile Uint16t*)(0x5B))
#define MCUCR (*(volatile Uint16t*)(0x54))

/********************************************** register**************************************************/

#endif /* ATMEGA32_REGISTERS_H_ */