/************************************************************************
* 
* Module      : DIO module
*
* File Name   : Seven_Seg_config.c
*
* Description : Header file for seven seg module private parameters.
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 29 JULY 2022
*
***************************************************************************/
#ifndef SEVEN_SEG_CONFIG_H_
#define SEVEN_SEG_CONFIG_H_

#include "DIO_interface.h"

#include "Seven_Seg_private.h"

/*****************************************/
//******PARAMETER CONFIGURATIONS*********//
/*****************************************/
/* Seven Seg type: 1. common cathode
                   2. common Anode
************************************/
#define SEVEN_SEG_TYPE COM_CATHODE


/************************************
** Seven Seg Port: 1. PortA
                   2. PortB
                   3. PortC..PortG
************************************/
#define SEVEN_SEG_PORT PORTA

/************************************
** Seven Seg Pins: 1. Pin0
                   2. Pin1
                   3. Pin2..
************************************/
#define SEG_A PIN0
#define SEG_B PIN1
#define SEG_C PIN2
#define SEG_D PIN3
#define SEG_E PIN8
#define SEG_F PIN9
#define SEG_G PIN10



#endif /* SEVEN_SEG_CONFIG_H_ */
