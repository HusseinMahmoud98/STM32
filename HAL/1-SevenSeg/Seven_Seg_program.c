/************************************************************************
 *
 * Module      : DIO module
 *
 * File Name   : Seven_Seg_program.c
 *
 * Description : Header file for seven seg module functions implementations
 *
 * Author      : Hussein Mahmoud Fouad
 *
 * Version     : V02
 *
 * Date        : 29 JULY 2022
 *
 ***************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"


#include "Seven_Seg_private.h"
#include "Seven_Seg_config.h"
#include "Seven_Seg_interface.h"

/************************************************
 ***********Functions Definitions****************
 *************************************************/
/*
 * Description: Function to initialize Seven Segment
 */
void SevenSeg_init(void)
{
	DIO_initPin(SEG_A, SEVEN_SEG_PORT, OUTPUT_PUSH_PULL_MODE, OUTPUT_MAX_10_MHZ);
	DIO_initPin(SEG_B, SEVEN_SEG_PORT, OUTPUT_PUSH_PULL_MODE, OUTPUT_MAX_10_MHZ);
	DIO_initPin(SEG_C, SEVEN_SEG_PORT, OUTPUT_PUSH_PULL_MODE, OUTPUT_MAX_10_MHZ);
	DIO_initPin(SEG_D, SEVEN_SEG_PORT, OUTPUT_PUSH_PULL_MODE, OUTPUT_MAX_10_MHZ);
	DIO_initPin(SEG_E, SEVEN_SEG_PORT, OUTPUT_PUSH_PULL_MODE, OUTPUT_MAX_10_MHZ);
	DIO_initPin(SEG_F, SEVEN_SEG_PORT, OUTPUT_PUSH_PULL_MODE, OUTPUT_MAX_10_MHZ);
	DIO_initPin(SEG_G, SEVEN_SEG_PORT, OUTPUT_PUSH_PULL_MODE, OUTPUT_MAX_10_MHZ);
}

/*
 * Description: Function to display a number on the 7 segment
 */
void SevenSeg_Display(const u8 a_number)
{
	switch (a_number)
	{
	case 0:
		DIO_setPin(SEVEN_SEG_PORT, SEG_A);
		DIO_setPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_setPin(SEVEN_SEG_PORT, SEG_D);
		DIO_setPin(SEVEN_SEG_PORT, SEG_E);
		DIO_setPin(SEVEN_SEG_PORT, SEG_F);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_G);   break;

	case 1 :
		DIO_clearPin(SEVEN_SEG_PORT, SEG_A);
		DIO_setPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_D);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_E);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_F);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_G);   break;

	case 2 :
		DIO_setPin(SEVEN_SEG_PORT, SEG_A);
		DIO_setPin(SEVEN_SEG_PORT, SEG_B);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_C);
		DIO_setPin(SEVEN_SEG_PORT, SEG_D);
		DIO_setPin(SEVEN_SEG_PORT, SEG_E);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_F);
		DIO_setPin(SEVEN_SEG_PORT, SEG_G);  break;

	case 3 :
		DIO_setPin(SEVEN_SEG_PORT, SEG_A);
		DIO_setPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_setPin(SEVEN_SEG_PORT, SEG_D);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_E);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_F);
		DIO_setPin(SEVEN_SEG_PORT, SEG_G);  break;

	case 4 :
		DIO_clearPin(SEVEN_SEG_PORT, SEG_A);
		DIO_setPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_D);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_E);
		DIO_setPin(SEVEN_SEG_PORT, SEG_F);
		DIO_setPin(SEVEN_SEG_PORT, SEG_G);   break;

	case 5 :
		DIO_setPin(SEVEN_SEG_PORT, SEG_A);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_setPin(SEVEN_SEG_PORT, SEG_D);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_E);
		DIO_setPin(SEVEN_SEG_PORT, SEG_F);
		DIO_setPin(SEVEN_SEG_PORT, SEG_G);   break;

	case 6 :
		DIO_setPin(SEVEN_SEG_PORT, SEG_A);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_setPin(SEVEN_SEG_PORT, SEG_D);
		DIO_setPin(SEVEN_SEG_PORT, SEG_E);
		DIO_setPin(SEVEN_SEG_PORT, SEG_F);
		DIO_setPin(SEVEN_SEG_PORT, SEG_G);   break;

	case 7 :
		DIO_setPin(SEVEN_SEG_PORT, SEG_A);
		DIO_setPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_D);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_E);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_F);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_G);   break;

	case 8 :
		DIO_setPin(SEVEN_SEG_PORT, SEG_A);
		DIO_setPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_setPin(SEVEN_SEG_PORT, SEG_D);
		DIO_setPin(SEVEN_SEG_PORT, SEG_E);
		DIO_setPin(SEVEN_SEG_PORT, SEG_F);
		DIO_setPin(SEVEN_SEG_PORT, SEG_G);   break;
	case 9 :
		DIO_setPin(SEVEN_SEG_PORT, SEG_A);
		DIO_setPin(SEVEN_SEG_PORT, SEG_B);
		DIO_setPin(SEVEN_SEG_PORT, SEG_C);
		DIO_setPin(SEVEN_SEG_PORT, SEG_D);
		DIO_clearPin(SEVEN_SEG_PORT, SEG_E);
		DIO_setPin(SEVEN_SEG_PORT, SEG_F);
		DIO_setPin(SEVEN_SEG_PORT, SEG_G);   break;
	}

}


