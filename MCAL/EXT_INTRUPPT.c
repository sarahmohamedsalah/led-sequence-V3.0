/*
* EXT_INTRUPPT.c
*
* Created: 
*/

#include "EXT_INTRUPPT.h"
//#define counter_number 9
//Uint8t counter =0;
void EXT_INT0_Init(void)
{
	/*Step 1- Disable Global Interrupt*/
	cli();
	//CLR_BIT(SREG, 7);
	/*Define Logic for Firing interrupt*/
	CLR_BIT(MCUCR, ISC00);
	SET_BIT(MCUCR, ISC01);
	/*Enable Peripheral interrupt*/
	SET_BIT(GICR, 6);
	/*Enable Global Interrupt*/
	sei();
	//SET_BIT(SREG, 7);
	//LED0_Init();
}
/*ISR(INT0_vect)
{
	if(counter<counter_number){
		
		counter++;
	}else{
		counter =0;
	}
}
*/