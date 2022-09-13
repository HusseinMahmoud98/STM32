/************************************************************************
* 
* Module      : Seven Segment module
*
* File Name   : Seven_Seg_interface.h
*
* Description : Header file for Seven Segment module prototype functions and interface parameters.
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 30 JULY 2022
*
***************************************************************************/
#ifndef SEVEN_SEG_INTERFACE_H_
#define SEVEN_SEG_INTERFACE_H_

#include "STD_TYPES.h"
/************************************************
***********Functions Prototypes******************
*************************************************/
/*
* Description: Function to initialize Seven Segment
*/
void SevenSeg_init(void);
/*
* Description: Function to initialize full port as Digital Input/Output
*/
void SevenSeg_Display(const u8 a_number);


#endif /* SEVEN_SEG_INTERFACE_H_ */
