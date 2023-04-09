/*
 * light sequence.c
 *
 * Created: 4/4/2023 6:48:50 PM
 * Author : Sarah
 */ 

#include <avr/io.h>


//#include <stdio.h>
#include "ECUAL/button/BUTTON.h"
#include "ECUAL/led/LED.h"
#include "MCAl/EXT_INTRUPPT.h"

#define counter_number 9

#define	BLINK_1			0
#define	BLINK_2			1
#define	BLINK_3			2
#define	BLINK_4			3
#define BLINK_5			4
#define TURN_ON			0
#define TURN_OFF		1
 Uint8t counter =0 ;
uint8_t blinkMode = BLINK_1;
uint8_t timeOn = 1, timeOff = 9;
uint8_t  tickNumber = 0 ;
volatile uint8_t state = TURN_ON;
int main() {

	
	  BTN0_Init(PORTD, 2);
	  LED0_Init(PORTC,2);
	  LED1_Init(PORTC,3);
	  LED2_Init(PORTC,4);
	  LED3_Init(PORTC,5);
EXT_INT0_Init();
EXT_INT1_Init();

	while(1){
	
	void button0Task (uint8_t counter, uint8_t state){
		switch (state)
		{
			case TURN_ON:
		 if(counter ==1){
			 LED0_ON(PORTC, 2);

			 }else if(counter ==2){
			 LED1_ON(PORTC, 3);
			 LED0_ON(PORTC, 2);
			 }else if(counter ==3){
			 LED2_ON(PORTC, 4);
			 LED1_ON(PORTC, 3);
			 LED0_ON(PORTC, 2);
			 }else if (counter ==4){
			 LED3_ON(PORTC, 5);
			 LED2_ON(PORTC, 4);
			 LED1_ON(PORTC, 3);
			 LED0_ON(PORTC, 2);
			 }else if (counter ==5){
			 LED0_OFF(PORTC, 2);
			 LED3_ON(PORTC, 5);
			 LED2_ON(PORTC, 4);
			 LED1_ON(PORTC, 3);
			 }else if (counter ==6){
			 LED0_OFF(PORTC, 2);
			 LED3_ON(PORTC, 5);
			 LED2_ON(PORTC, 4);
			 LED1_OFF(PORTC, 3);
		 }
		 else if (counter ==7){
			 LED0_OFF(PORTC, 2);
			 LED3_ON(PORTC, 5);
			 LED2_OFF(PORTC, 4);
			 LED1_OFF(PORTC, 3);
			 }else if (counter ==8){
			 LED0_OFF(PORTC, 2);
			 LED3_OFF(PORTC, 5);
			 LED2_ON(PORTC, 4);
			 LED1_OFF(PORTC, 3);
			 }else if (counter ==9) {
			 break;
		 }
		 
		 case TURN_OFF:
		LED0_OFF(PORTC, 2);
		LED3_OFF(PORTC, 5);
		LED2_OFF(PORTC, 4);
		LED1_OFF(PORTC, 3);
		 break;
		 
		 default:
		 break;
	}
	
	
		 
		  
	}
		
		void button1Task(void)
		{
			switch (blinkMode)
			{
				case BLINK_1:	timeOn = 1; timeOff = 9;	blinkMode = BLINK_2;	break;
				case BLINK_2:	timeOn = 2;	timeOff = 8;	blinkMode = BLINK_3;	break;
				case BLINK_3:	timeOn = 3;	timeOff = 7;	blinkMode = BLINK_4;	break;
				case BLINK_4:	timeOn = 5;	timeOff = 5;	blinkMode = BLINK_5;	break;
				case BLINK_5:	timeOn = 8;	timeOff = 2;	blinkMode = BLINK_1;	break;
				default:															break;
			}
		}

	

	}



 
 
 
 
}

ISR(INT0_vect)
{
	
	
	if(counter < counter_number){
		
		counter++;
		}else{
		counter =0;
	}
}
 ISR(INT1_vect){
	 
	 if (tickNumber < timeOn)
	 {
		 button0Task(&counter, TURN_ON);
		 state = TURN_ON;
		 tickNumber++;
	 }
	 else if (tickNumber >= timeOn && tickNumber < (timeOn+timeOff))
	 {
		 button0Task(&counter, TURN_OFF);
		 state = TURN_OFF;
		 tickNumber++;
		 if (tickNumber >= (timeOn + timeOff))
		 {
			 tickNumber = 0;
		 }
	 }
 }