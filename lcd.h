

#ifndef __LCD_H_
#define __LCD_H_

#include <p18f4520.h>

#define 	LCD_DATA		PORTD
#define 	LCD_RS   		PORTEbits.RE0
#define 	LCD_RW   		PORTEbits.RE1
#define		LCD_EN   	 	PORTEbits.RE2
void Lcd_configure(void);//KHOI TAO LCD
void Lcd_Write_Command(char command);//GHI LENH
void Lcd_Write_Data(char data);//GHI DATA
void Lcd_Write_String (char *str,char *str1);
void Lcd_Write_String_nghich (char *str, int n)

#endif