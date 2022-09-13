/************************************************************************
* 
* Module      : RCC module
*
* File Name   : RCC_interface.h
*
* Description : Header file for RCC module prototype functions and interface parameters.
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 27 JULY 2022
*
***************************************************************************/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#include "RCC_private.h"
#include "RCC_config.h"

#include "STD_TYPES.h"

//*************************************************
/*********MACROS INTERFACE PARAMETERS*************/
//*************************************************

/*****************Ports Definations***************/
#define PortA 0
#define PortB 1
#define PortC 2
#define PortD 3
#define PortE 4
#define PortF 5
#define PortG 6


/*****************Pins Definations***************/
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

/**************Pin Direction*******************/
#define INPUT             0
#define OUTPUT_MAX_10_MHZ 1
#define OUTPUT_MAX_20_MHZ 2
#define OUTPUT_MAX_50_MHZ 3

/***********Input Pin Mode Configuraton********/
#define INPUT_ANALOG_MODE            0
#define INPUT_FLOATING_MODE          1
#define INPUT_PULL_UP_PULL_DOWN_MODE 2

/***********Output Pin Mode Configuraton********/
#define OUTPUT_PUSH_PULL_MODE     0
#define OUTPUT_OPEN_DRAIN_MODE    1
#define OUTPUT_AF_PUSH_PULL_MODE  2
#define OUTPUT_AF_OPEN_DRAIN_MODE 3




/************************************************
***********Functions Prototypes******************
*************************************************/
/*
* Description: Function to initialize the given pin as Digital Input/Output
*/
void DIO_initPin(const u8 a_PinID,const u8 a_PortID, const u8 a_PinDir, const u8 a_PinMode);

/*
* Description: Function to initialize full port as Digital Input/Output
*/
void DIO_initPort(const u8 a_portID, const u8 a_PortDir);


#endif
