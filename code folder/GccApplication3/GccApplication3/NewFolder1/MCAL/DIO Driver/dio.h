/*
 * dio.h
 *
 * Created: 10/13/2022 8:22:56 PM
 *  Author: moash
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../utilities/registers.h"


#define HIGH 1
#define LOW 0

#define OUT 1
#define IN 0

#define portA 'A'
#define portB 'B'
#define portC 'C'
#define portD 'D'


void DIO_init(uint8_t portnum,uint8_t pinnum, uint8_t direction); 
void DIO_read(uint8_t portnum,uint8_t pinnum, uint8_t *value); // read pin
void DIO_write(uint8_t portnum,uint8_t pinnum, uint8_t value); 
void DIO_toggle(uint8_t portnum,uint8_t pinnum); 


#endif /* DIO_H_ */