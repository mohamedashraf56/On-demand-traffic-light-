/*
 * timer.h
 *
 * Created: 10/13/2022 8:30:58 PM
 *  Author: moash
 */ 


#ifndef TIMER_H_
#define TIMER_H_


#include "../INTERRUPTS Driver/interrupts.h"
#include "../DIO Driver/dio.h"



#define normal 'n'
#define pwm 'p'
#define ctc 'c'
#define fast_pwm 'f'
#define overflows_0 20
#define overflows_2 14
#define initial_value_0 11
#define initial_value_2 47


//**************************** timer functions *******************************************//


void timer0_set_initial_value(uint8_t value);
void timer0_select_mode(uint8_t mode);
void timer0_timer_start(int prescalar,uint8_t overflows);
void timer0_timer_reset();
void timer0_timer_stop();
void timer2_select_mode(uint8_t mode);
void timer2_set_initial_value(uint8_t value);
void timer2_timer_start(int prescalar,uint8_t overflows);
void timer2_timer_stop();
void timer2_timer_reset();




#endif /* TIMER_H_ */