/************************************************************************
* 
* Module      : RCC module.
*
* File Name   : RCC_interface.h
*
* Description : Header file for RCC module prototype functions and interface parameters.
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 24 JULY 2022
*
***************************************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "DIO_interface.h"
/************************************************
***********Functions' Definitions****************
*************************************************/
/*
* Description: Function to initialize the given pin as Digital Input/Output
*/
void DIO_initPin(const u8 a_PinID,const u8 a_PortID, const u8 a_PinDir, const u8 a_PinMode)
{
	u64 l_var = (((a_PinDir)|(a_PinMode<<2))<<a_PinID*4);
	
	switch (a_PortID)
	{
		case PORTA: if(a_PinID<PIN4)
					 {
						GPIOA_CRL&=~(0xF)<<a_PinID;
						GPIOA_CRL|=(((a_PinDir)|(a_PinMode<<2))<<a_PinID*4);
					 }
					else
					{
						GPIOA_CRL&=~(0xF)<<(a_PinID-4);
						GPIOA_CRH|=(((a_PinDir)|(a_PinMode<<2))<<(a_PinID-4)*4);
					}
					break;
					
		case PORTB: if(a_PinID<PIN4)
					 {
						GPIOA_CRL&=~(0xF)<<a_PinID;
						GPIOA_CRL|=(((a_PinDir)|(a_PinMode<<2))<<a_PinID*4);
					 }
					else
					{
						GPIOA_CRL&=~(0xF)<<(a_PinID-4);
						GPIOA_CRH|=(((a_PinDir)|(a_PinMode<<2))<<(a_PinID-4)*4);
					}
					break;
					
		case PORTC: if(a_PinID<PIN4)
					 {
						GPIOA_CRL&=~(0xF)<<a_PinID;
						GPIOA_CRL|=(((a_PinDir)|(a_PinMode<<2))<<a_PinID*4);
					 }
					else
					{
						GPIOA_CRL&=~(0xF)<<(a_PinID-4);
						GPIOA_CRH|=(((a_PinDir)|(a_PinMode<<2))<<(a_PinID-4)*4);
					}
					break;
		
		case PORTD: if(a_PinID<PIN4)
					 {
						GPIOA_CRL&=~(0xF)<<a_PinID;
						GPIOA_CRL|=(((a_PinDir)|(a_PinMode<<2))<<a_PinID*4);
					 }
					else
					{
						GPIOA_CRL&=~(0xF)<<(a_PinID-4);
						GPIOA_CRH|=(((a_PinDir)|(a_PinMode<<2))<<(a_PinID-4)*4);
					}
					break;
					
		case PORTE: if(a_PinID<PIN4)
					 {
						GPIOA_CRL&=~(0xF)<<a_PinID;
						GPIOA_CRL|=(((a_PinDir)|(a_PinMode<<2))<<a_PinID*4);
					 }
					else
					{
						GPIOA_CRL&=~(0xF)<<(a_PinID-4);
						GPIOA_CRH|=(((a_PinDir)|(a_PinMode<<2))<<(a_PinID-4)*4);
					}
					break;
		case PORTF: if(a_PinID<PIN4)
					 {
						GPIOA_CRL&=~(0xF)<<a_PinID;
						GPIOA_CRL|=(((a_PinDir)|(a_PinMode<<2))<<a_PinID*4);
					 }
					else
					{
						GPIOA_CRL&=~(0xF)<<(a_PinID-4);
						GPIOA_CRH|=(((a_PinDir)|(a_PinMode<<2))<<(a_PinID-4)*4);
					}
					break;
		case PORTG: if(a_PinID<PIN4)
					 {
						GPIOA_CRL&=~(0xF)<<a_PinID;
						GPIOA_CRL|=(((a_PinDir)|(a_PinMode<<2))<<a_PinID*4);
					 }
					else
					{
						GPIOA_CRL&=~(0xF)<<(a_PinID-4);
						GPIOA_CRH|=(((a_PinDir)|(a_PinMode<<2))<<(a_PinID-4)*4);
					}
					break;
	}
}

/*
* Description: Function to initialize full port as Digital Input/Output
*/
void DIO_initPort(const u8 a_portno, const a_PortDir){}
