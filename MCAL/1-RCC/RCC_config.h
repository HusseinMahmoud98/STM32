/************************************************************************
* 
* Module      : RCC module
*
* File Name   : RCC_config.h
*
* Describtion : Header file for RCC module configuration parameters
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 23 JULY 2021
*
***************************************************************************/
#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

//**********RCC Configuration enums*****************//
typedef enum
{
	HSI, HSE, PLL
	
}Sys_Clock_SelectionType;

typedef enum
{
	SYS_CLK, SYS_CLK_2 = 8, SYS_CLK_4, SYS_CLK_8,
	SYS_CLK_16, SYS_CLK_32, SYS_CLK_64, SYS_CLK_128, 
	SYS_CLK_256, SYS_CLK_512
}AHB_PreScaleType;

typedef enum
{
	HCLK, HCLK_2 = 4, HCLK_4, HCLK_8, HCLK_16
}APB1_PreScaleType;

typedef enum
{
	HCLK, HCLK_2 = 4, HCLK_4, HCLK_8, HCLK_16
	
}APB2_PreScaleType;

typedef enum
{
	PCLK2_2, PCLK2_4, PCLK2_6, PCLK2_8
}ADC_PrescalerType;

typedef enum
{
	HSI_2, HSE
}PLL_SRCType;

typedef enum
{
	HSE, HSE_2
}PLL_HSE_DividerType; 

typedef enum
{
	PLL2, PLL3, PLL4, PLL5, PLL6, PLL7, PLL8, PLL9,
	PLL10, PLL11, PLL12, PLL13, PLL14, PLL15, PLL16
}PLL_MULType; 

typedef enum
{
	PLL_1_5, PLL
}USB_PreScalerType;

typedef enum
{
	NO_CLK, SYS_CLK, HSI_CLK, HSE_CLK, PLL_2
}MCO_Type;


//**********RCC Configuration structs*****************//
typedef struct
{
	Sys_Clock_SelectionType Sys_Clock;
	AHB_PreScaleType        AHB_PreScale;
	APB1_PreScaleType       APB1_PreScale;
	APB2_PreScaleType       APB2_PreScale;
}Sys_Clock_Config;

typedef struct
{
	ADC_PrescalerType ADC_Prescaler;
}ADC_PrescalerConfig;

typedef struct
{
	PLL_SRCType         PLL_SRC;
	PLL_HSE_DividerType PLL_HSE_DividerType;
	PLL_MULType         PLL_MUL;
}PLL_config;

typedef struct
{
	USB_PreScalerType USB_PreScaler;
}USB_PreScalerConfig;

typedef struct
{
	MCO_Type MCO;
}MCO_Config;


#endif   /*RCC_CONFIG_H_*/
