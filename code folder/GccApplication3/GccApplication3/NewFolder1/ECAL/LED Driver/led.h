/*
 * led.h
 *
 * Created: 10/13/2022 8:21:38 PM
 *  Author: moash
 */ 


#ifndef LED_H_
#define LED_H_


#include "../../MCAL/DIO Driver/dio.h"

void LED_init(uint8_t ledport, uint8_t ledpin); 

/*************************************************************************/

void LED_on(uint8_t ledport, uint8_t ledpin); // turn on a LED
void LED_off(uint8_t ledport, uint8_t ledpin); // turn off a LED
void LED_toggle(uint8_t ledport, uint8_t ledpin); // toggle a LED


#endif /* LED_H_ */