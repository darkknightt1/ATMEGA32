/*
 * DIO_reg.h
 *
 * Created: 9/5/2023 11:40:50 PM
 *  Author: Omar Wessam
 */ 


#ifndef DIO_REG_H_
#define DIO_REG_H_

#define PORTA *((volatile uint8*)0x3B) //pointer type casting of number 0x3B to be treated as address, then derefrence the pointer 
#define  DDRA *((volatile uint8*)0x3A)
#define  PINA *((volatile uint8*)0x39)
			   
#define PORTB *((volatile uint8*)0x38)
#define  DDRB *((volatile uint8*)0x37)
#define  PINB *((volatile uint8*)0x36)
			   
#define PORTC *((volatile uint8*)0x35)
#define  DDRC *((volatile uint8*)0x34)
#define  PINC *((volatile uint8*)0x33)
			   
#define PORTD *((volatile uint8*)0x32)
#define  DDRD *((volatile uint8*)0x31)
#define  PIND *((volatile uint8*)0x30)



#endif /* DIO_REG_H_ */