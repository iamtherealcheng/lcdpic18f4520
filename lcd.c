
#include "lcd.h"
#include<p18f4520.h>
#include<delays.h>
#define 	LCD_DATA		PORTD
#define 	LCD_RS   		PORTEbits.RE0
#define 	LCD_RW   		PORTEbits.RE1
#define		LCD_EN   	 	PORTEbits.RE2
void Lcd_configure (void)
{	
	Lcd_Write_Command(0x03);							
 	Lcd_Write_Command(0x38);	
	Lcd_Write_Command(0x06);
	Lcd_Write_Command(0x0c);		
	Lcd_Write_Command(0x01);
}
void Lcd_Write_Command (char command)
{ 						
   LCD_RS	= 0;
   LCD_RW	= 0;			
   LCD_EN	= 1;			
   LCD_DATA = command;
   LCD_EN	= 0;
   Delay1KTCYx(10);//10mS				
}
void Lcd_Write_Data (char data)
{ 
   LCD_RS	 = 1;
   LCD_RW	 = 0;				
   LCD_EN	 = 1;				
   LCD_DATA  = data;
   LCD_EN	 = 0;				
   Delay1KTCYx(10);//10mS				
}
void Lcd_Write_String (char *str)
{
	while(*str) 
	{
		Lcd_Write_Data(*str);
		str++;
	}
}
int main(){
}
