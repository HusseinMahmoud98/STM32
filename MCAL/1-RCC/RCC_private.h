/************************************************************************
* 
* Module      : RCC module
*
* File Name   : RCC_private.h
*
* Describtion : Header file for RCC module private parameters and functions
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 24 JULY 2022
*
***************************************************************************/
#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#include "STD_TYPES.h"

/* Registers Definitions */
#define RCC_CR        *((volatile u32*)0x40021000)
#define RCC_CFGR      *((volatile u32*)0x40021004)
#define RCC_CIR       *((volatile u32*)0x40021008)
#define RCC_APB2RSTR  *((volatile u32*)0x4002100C)
#define RCC_APB1RSTR  *((volatile u32*)0x40021010)
#define RCC_AHBENR    *((volatile u32*)0x40021014)
#define RCC_APB2ENR   *((volatile u32*)0x40021018)
#define RCC_APB1ENR   *((volatile u32*)0x4002101C)
#define RCC_BDCR      *((volatile u32*)0x40021020)
#define RCC_CSR       *((volatile u32*)0x40021020)


#endif   /*RCC_PRIVATE_H_*/
