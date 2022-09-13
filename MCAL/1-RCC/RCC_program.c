/************************************************************************
* 
* Module      : RCC module
*
* File Name   : RCC_program.c
*
* Describtion : Source file for RCC module functions' implementation and global variabales
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 24 JULY 2022
*
***************************************************************************/
#include "RCC_interface.h"


void RCC_enableClock(u8 a_BusID, u8 a_PeriphID)
{
	if(a_PerphID <= 31)
	{
		switch (a_BusID)
		case RCC_AHB     : SET_BIT(RCC_AHBENR,  a_PeriphID);  break;
		case RCC_APB1    : SET_BIT(RCC_APB1ENR, a_PeriphID);  break;
		case RCC_APB2    : SET_BIT(RCC_APB2ENR, a_PeriphID);  break;
		default          : /* Error */                        break;
	}
	
	else
	{
		/*error*/
	}
}

void RCC_disableClock(u8 a_BusID, u8 a_PerphID)
{
	if(a_PerphID <= 31)
	{
		switch (a_BusID)
		case RCC_AHB     : CLR_BIT(RCC_AHBENR,  a_PerphID);  break;
		case RCC_APB1    : CLR_BIT(RCC_APB1ENR, a_PerphID);  break;
		case RCC_APB2    : CLR_BIT(RCC_APB2ENR, a_PerphID);  break;
		default          : /* Error */                       break;
	}
	
	else
	{
		/*error*/
	}
}

void RCC_initSystemclock(Sys_Clock_Selection_Config a_Sys_Clock, Internal_Clock_Prescaling_Config a_Internal_Clock_Prescaling)
{
	/* select clock type (HSI, HSE, PLL) */
	RCC_CFGR|= (a_Sys_Clock->Sys_Clock);
	while(((RCC_CFGR>>2)&0x3)!=(a_Sys_Clock->Sys_Clock));
	
	
	
	if(a_Sys_Clock->Sys_Clock == HSI)
	{
		RCC_CFGR|= (((a_Sys_Clock_Config->AHB_PreScale)&0xF)<<4);
		RCC_CFGR|= (((a_Sys_Clock_Config->APB1_PreScale)&0x7)<<8);
		RCC_CFGR|= (((a_Sys_Clock_Config->APB2_PreScale)&0x7)<<11);
		
		SET_BIT(RCC_CR, HSION);
		while(BIT_IS_CLR(RCC_CFGR, HSIRDY));
	}
	
	//else if(a_Sys_Clock->Sys_Clock == PLL)
	//{
		
	//}
	
	
}
						 
						