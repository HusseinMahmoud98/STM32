/************************************************************************
* 
* Module      : DIO module.
*
* File Name   : DIO_private.h
*
* Description : Header file for DIO module register addresses.
*
* Author      : Hussein Mahmoud Fouad
*
* Version     : V02
*
* Date        : 27 JULY 2022
*
***************************************************************************/
#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include "STD_TYPES.h"

//************************************************//
/**************DIO Registers Definition************/
//*************************************************/


/*****GPIOA Registers' Addresses Defination**********/
#define GPIOA_CRL *((volatile u32*)0x40010800)
#define GPIOA_CRH *((volatile u32*)0x40010804)
#define GPIOA_IDR *((volatile u32*)0x40010808)
#define GPIOA_ODR *((volatile u32*)0x4001080C)


/*****GPIOB Registers' Addresses Defination**********/
#define GPIOB_CRL *((volatile u32*)0x40010C00)
#define GPIOB_CRH *((volatile u32*)0x40010C04)
#define GPIOB_IDR *((volatile u32*)0x40010C08)
#define GPIOB_ODR *((volatile u32*)0x40010C0C)


/*****GPIOC Registers' Addresses Defination**********/
#define GPIOC_CRL *((volatile u32*)0x4001000)
#define GPIOC_CRH *((volatile u32*)0x4001004)
#define GPIOC_IDR *((volatile u32*)0x4001008)
#define GPIOC_ODR *((volatile u32*)0x400100C)


/*****GPIOD Registers' Addresses Defination**********/
#define GPIOD_CRL *((volatile u32*)0x40011400)
#define GPIOD_CRH *((volatile u32*)0x40011404)
#define GPIOD_IDR *((volatile u32*)0x40011408)
#define GPIOD_ODR *((volatile u32*)0x4001140C)


/*****GPIOE Registers' Addresses Defination**********/
#define GPIOA_CRL *((volatile u32*)0x40011800)
#define GPIOA_CRH *((volatile u32*)0x40011804)
#define GPIOA_IDR *((volatile u32*)0x40011808)
#define GPIOA_ODR *((volatile u32*)0x4001180C)


/*****GPIOF Registers' Addresses Defination**********/
#define GPIOF_CRL *((volatile u32*)0x40011C00)
#define GPIOF_CRH *((volatile u32*)0x40011C04)
#define GPIOF_IDR *((volatile u32*)0x40011C08)
#define GPIOF_ODR *((volatile u32*)0x40011C0C)


/*****GPIOG Registers' Addresses Defination**********/
#define GPIOA_CRL *((volatile u32*)0x40012000)
#define GPIOA_CRH *((volatile u32*)0x40012004)
#define GPIOA_IDR *((volatile u32*)0x40012008)
#define GPIOA_ODR *((volatile u32*)0x4001200C)



#endif
