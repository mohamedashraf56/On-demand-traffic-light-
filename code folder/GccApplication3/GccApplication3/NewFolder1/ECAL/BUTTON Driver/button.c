/*
 * CFile1.c
 *
 * Created: 10/13/2022 8:19:18 PM
 *  Author: moash
 */ 
#include "button.h"

uint8_t flag = Interrupt_nothappened; // Flag checking first push
uint8_t pushed = Button_notpushed; // Flag checking double push
extern uint8_t status;

/*******************************button func***************************************/


//Initialize button port
void BUTTON_init(uint8_t buttonport, uint8_t buttonpin)
{
	DIO_init(buttonport,buttonpin,IN);
}



// button read
void BUTTON_read(uint8_t buttonport,uint8_t buttonpin, uint8_t *value)
{
	DIO_read(buttonport,buttonpin,value);
}



//Button interrupt service routine function
ISR(EXT_INT_0)
{
	// If pushed in red state
	if(status == Red_state && !pushed)
	{
		timer0_timer_reset();
		LED_on(portB,Green_Pedestrians);
		flag = Interrupt_happened; 
		pushed = Button_pushed; 
	}
	
	// If pushed in green state
	else if(status == Green_state && !pushed)
	{
		timer0_timer_reset();
		LED_on(portB,Red_pedestrians);
		flag = Interrupt_happened; 
		pushed = Button_pushed; 
	}
	// If pushed in yellow state
	else if((status == Yellow1_state || status == Yellow2_state) && !pushed)
	{
		timer0_timer_reset();
		LED_on(portB,Red_pedestrians);
		LED_off(portA,Yellow_cars); 
		flag = Interrupt_happened; 
		pushed = Button_pushed; 
	}
}