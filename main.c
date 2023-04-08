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
#define counter_number 9
static Uint8t counter =0 ;
int main() {
//	static Uint8t buttonstate=0;
	//BTN0_Init();
	
	  BTN0_Init(PORTD, 2);
	  LED0_Init(PORTC,2);
	  LED1_Init(PORTC,3);
	  LED2_Init(PORTC,4);
	  LED3_Init(PORTC,5);
EXT_INT0_Init();
//  static Uint8t counter =0;
//static Uint8t value;
	while(1){
	/*	
	//	BTN0_read(&buttonstate);
	value=	BTN0_GetValue(DIO_PORTD,  DIO_PIN2);
	if(value ){
		_delay_ms(30);
		//BTN0_read(&buttonstate);
		value=	BTN0_GetValue(DIO_PORTD,  DIO_PIN2);
		if (value){
			counter++;
			if (counter ==0)
			{   LED0_OFF();
				LED3_OFF();
				LED2_OFF();
				LED1_OFF();
				counter ++;
			}
			else if(counter ==1){
				LED0_ON();
				LED3_OFF();
				LED2_OFF();
				LED1_OFF();
                counter ++;
				}else if(counter ==2){
				LED1_ON();
				LED0_ON();
				LED3_OFF();
				LED2_OFF();
				}else if(counter ==3){
				LED2_ON();
				LED1_ON();
				LED0_ON();
				LED3_OFF();
				}else if (counter ==4){
				LED3_ON();
				LED2_ON();
				LED1_ON();
				LED0_ON();
				}else if (counter ==5){
				LED0_OFF();
				LED3_ON();
				LED2_ON();
				LED1_ON();
				}else if (counter ==6){
				LED0_OFF();
				LED3_ON();
				LED2_ON();
				LED1_OFF();
			}
			else if (counter ==7){
				LED0_OFF();
				LED3_ON();
				LED2_OFF();
				LED1_OFF();
				}else if (counter ==8){
				LED0_OFF();
				LED3_OFF();
				LED2_ON();
				LED1_OFF();
				}else if (counter ==9) {
				counter =0;
				break;
			}
		}
		
	}
	
		
		*/
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
	}
		
		
		



	}


ISR(INT0_vect)
{
	
	counter ++;
	if(counter < counter_number){
		
		counter++;
		}else{
		counter =0;
	}
}
