/*
 * button.h
 *
 * Created: 10/13/2022 8:19:49 PM
 *  Author: moash
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_


#include "../LED Driver/led.h"
#include "../../MCAL/TIMER Driver/timer.h"

#define Green_state 0
#define Yellow1_state 1
#define Red_state 2
#define Yellow2_state 3
#define Button_pushed 1
#define Button_notpushed 0
#define Interrupt_happened 1
#define Interrupt_nothappened 0


// button port
void BUTTON_init(uint8_t buttonport, uint8_t buttonpin);


// button read
void BUTTON_read(uint8_t buttonport,uint8_t buttonpin, uint8_t *value);


#endif /* BUTTON_H_ */