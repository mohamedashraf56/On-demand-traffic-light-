/*
 * app.h
 *
 * Created: 10/13/2022 8:11:26 PM
 *  Author: moash
 */ 


#ifndef APP_H_
#define APP_H_


#include "../ECAL/LED Driver/led.h"
#include "../ECAL/BUTTON Driver/button.h"
#include "../MCAL/TIMER Driver/timer.h"

void app_init(); // Initialization of the app
void app_start(); // run the app


#endif /* APP_H_ */