/***********************************************************************
 * @file lcd.h
 * LCD
 * @author	:	ch
 * @brief	:	
 * @version:	v1.0
 * @Copyright (C)  2020-11-30  .cdWFVCEL. all right reserved
***********************************************************************/

#ifndef __LCD_H_
#define __LCD_H_
/* 包含头文件 ------------------------------------------------------------------*/
// #include "ch/bsp.h"
#include <U8x8lib.h>
/* 宏定义 ----------------------------------------------------------------------*/
#define U8X8_SDA PB11
#define U8X8_SCL PB10
/* 类型定义 --------------------------------------------------------------------*/
/* 变量声明 --------------------------------------------------------------------*/
extern U8X8_SSD1306_128X64_NONAME_HW_I2C lcd;
/* 函数声明 --------------------------------------------------------------------*/
void LCD_Init();


#endif // __LCD_H_
