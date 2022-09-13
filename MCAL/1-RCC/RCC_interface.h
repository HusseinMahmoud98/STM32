/************************************************************************
* 
* Module      : RCC module
*
* File Name   : RCC_interface.h
*
* Describtion : Header file for RCC module prototype functions and interface parameters
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 24 JULY 2022
*
***************************************************************************/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#include "RCC_private.h"
#include "RCC_config.h"
//*************************************************
/*********MACROS INTERFACE PARAMETERS*************/
//*************************************************

//**********System RCC Bus Parameters*************
#define RCC_AHB    0
#define RCC_APB1   1
#define RCC_APB2   2

//**********Clock Control Parameters*******************
#define HSION   0  /* Internal high-speed clock enable */
#define HSIRDY  1  /* Internal high-speed clock ready flag */
#define HSITRIM 2  /* Internal high-speed clock trimming*/
#define HSICAL  3  /* Internal high-speed clock calibration */ 
#define HSEON   4  /* HSE clock enable */
#define HSERDY  5  /* External high-speed clock ready flag */
#define HSEBYP  6  /* External high-speed clock bypass */
#define CSSON   7  /* Clock security system enable */
#define PLLON   8  /* PLL enable */
#define PLLRDY  9  /* PLL clock ready flag */
#define PLL2ON  10 /* PLL2 enable */
#define PLL2RDY 11 /* PLL2 clock ready flag */
#define PLL3ON  12 /* PLL3 enable */
#define PLL3RDY 13 /* PLL3 clock ready flag */



/************************************************
***********Functions Prototypes******************
*************************************************/

/*
* Describtion: Function to enable RCC clock for a given peripheralID with the required Bus
*/
void RCC_enableClock(u8 a_BusID, u8 a_PeriphID);

/*
* Describtion: Function to disable RCC clock for a given peripheralID with the required Bus
*/
void RCC_disableClock(u8 a_BusID, u8 a_PeriphID);

/*
* Describtion: Function to Initialize System Clock
*/
void RCC_initSystemclock(Sys_Clock_Selection_Config Sys_Clock,
						 Internal_Clock_Prescaling_Config);
#endif
