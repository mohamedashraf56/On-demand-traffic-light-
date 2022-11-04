/*
 * dio.c
 *
 * Created: 10/13/2022 8:22:46 PM
 *  Author: moash
 */ 
#include "dio.h"

void DIO_init(uint8_t portnum,uint8_t pinnum, uint8_t direction)
{
	switch(portnum)
	{
		case portA:
			if(direction == IN)
				DDR_A &= ~(1 << pinnum); // Make pin number (pinnum) in port A an input pin
			else if(direction == OUT)
				DDR_A |= (1 << pinnum);	// Make pin number (pinnum) in port A an output pin
			else
			{
				//Error Handling
			}
		break;

		case portB:
			if(direction == IN)
				DDR_B &= ~(1 << pinnum); // Make pin number (pinnum) in port B an input pin

			else if(direction == OUT)
				DDR_B |= (1 << pinnum);	// Make pin number (pinnum) in port B an output pin

			else
			{
				//Error Handling
			}
		break;

		case portC:
			if(direction == IN)
				DDR_C &= ~(1 << pinnum); // Make pin number (pinnum) in port C an input pin

			else if(direction == OUT)
				DDR_C |= (1 << pinnum);	// Make pin number (pinnum) in port C an output pin

			else
			{
				//Error Handling
			}
		break;

		case portD:
			if(direction == IN)
				DDR_D &= ~(1 << pinnum); // Make pin number (pinnum) in port D an input pin

			else if(direction == OUT)
				DDR_D |= (1 << pinnum);	// Make pin number (pinnum) in port D an input pin

			else
			{
				//Error Handling
			}
		break;

		default:
		{
			
		}
	}
}


/**************************************************************************************************************************/


void DIO_read(uint8_t portnum,uint8_t pinnum, uint8_t *value)
{
	switch(portnum)
	{
		case portA:
		*value = (PIN_A & (1 << pinnum)) >> pinnum; 
		break;

		case portB:
		*value = (PIN_B & (1 << pinnum)) >> pinnum; 
		break;

		case portC:
		*value = (PIN_C & (1 << pinnum)) >> pinnum; 
		break;

		case portD:
		*value = (PIN_D & (1 << pinnum)) >> pinnum;
		break;

		default:
		{
			
		}
	}
}



void DIO_write(uint8_t portnum,uint8_t pinnum, uint8_t value)
{
	switch(portnum)
	{
		case portA:
			if(value == LOW)
				PORT_A &= ~(1 << pinnum); 

			else if(value == HIGH)
				PORT_A |= (1 << pinnum); 

			else
			{
				
			}
		break;

		case portB:
			if(value == LOW)
				PORT_B &= ~(1 << pinnum); 

			else if(value == HIGH)
				PORT_B |= (1 << pinnum); 

			else
			{
				
			}
		break;

		case portC:
			if(value == LOW)
				PORT_C &= ~(1 << pinnum); 

			else if(value == HIGH)
				PORT_C |= (1 << pinnum); 

			else
			{
				
			}
		break;

		case portD:
			if(value == LOW)
				PORT_D &= ~(1 << pinnum);

			else if(value == HIGH)
				PORT_D |= (1 << pinnum); 

			else
			{
			
			}
		break;

		default:
		{
			
		}
	}
}

void DIO_toggle(uint8_t portnum,uint8_t pinnum)
{
	switch(portnum)
	{
		case portA:
			PORT_A ^= (1 << pinnum); 
		break;

		case portB:
			PORT_B ^= (1 << pinnum); 
		break;

		case portC:
			PORT_C ^= (1 << pinnum); 
		break;

		case portD:
			PORT_D ^= (1 << pinnum);
		break;

		default:
		{
			//Error Handling
		}
	}
}

