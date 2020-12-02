/***********************************************************************
 * @file key.h
 * KEY
 * @author	:	ch
 * @brief	:	
 * @version:	v1.0
 * @Copyright (C)  2020-12-02  .cdWFVCEL. all right reserved
***********************************************************************/

#ifndef __KEY_H_
#define __KEY_H_
/* 包含头文件 ------------------------------------------------------------------*/
#include "bsp.h"
/* 宏定义 ----------------------------------------------------------------------*/
#define KEY_DELAY 5

#define SET_KEY PA0
#define UP_KEY PA1
#define DOWN_KEY PA2

/* 类型定义 --------------------------------------------------------------------*/
/* 变量声明 --------------------------------------------------------------------*/
/* 函数声明 --------------------------------------------------------------------*/
void KEY_Init();
u8 KEY_ScanBlock(u8 keyPin);

#endif // __KEY_H_
