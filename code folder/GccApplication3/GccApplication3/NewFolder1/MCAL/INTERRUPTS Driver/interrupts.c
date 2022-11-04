/*
 * interrupts.c
 *
 * Created: 10/13/2022 8:26:19 PM
 *  Author: moash
 */ 


#include "interrupts.h"

void enable_global_interrupts()
{
	SREG |=(1 << BIT_7_I); 
}
void enable_button_interrupt()
{
	MCUCR |= ((1 << ISC00) | (1 << ISC01)); 
	GICR |= (1 << INT_0); 
}
void timer0_enable_overflow_interrupt()
{
	TIMSK |= (1 << TOIE0);
}
void timer2_enable_overflow_interrupt()
{
	TIMSK |= (1 << TOIE2); 
}