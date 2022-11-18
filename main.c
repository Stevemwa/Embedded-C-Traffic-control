/*
 * shift registers.c
 *
 * Created: 15/11/2022 18:11:45
 * Author : Mwas
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
void GreenJ1();
void Write_OneSHIF1();
void Write_ZeroSHIF1();
void Write_OneSHIF2();
void Write_ZeroSHIF2();
void YellowJ1();
void GreenJ2();
void YellowJ2();
void GreenJ3();
void YellowJ3();
void GreenJ4();
void YellowJ4();




int main(void)
{
   DDRD=0x3F;
    while (1) 
    {
	  GreenJ1();
	  _delay_ms(2000);
	  YellowJ1();
	  _delay_ms(2000);
	  GreenJ2();
	  _delay_ms(2000);
	  YellowJ2();
	  _delay_ms(2000);
	  
	  GreenJ3();
	  _delay_ms(2000);
	  YellowJ3();
	  _delay_ms(2000);
	  GreenJ4();
	  _delay_ms(2000);
	  YellowJ4();
	  _delay_ms(2000);
	  
	 }
}

void GreenJ1()
{ 
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	
}
void YellowJ1(){
	Write_OneSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	
	
}
void GreenJ2(){
Write_OneSHIF1();
Write_ZeroSHIF1();
Write_ZeroSHIF1();
Write_ZeroSHIF1();
Write_ZeroSHIF1();
Write_OneSHIF1();
Write_ZeroSHIF2();
Write_ZeroSHIF2();
Write_OneSHIF2();
Write_ZeroSHIF2();
Write_ZeroSHIF2();
Write_OneSHIF2();
}
void YellowJ2()
{
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	
}
void GreenJ3()
{
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	Write_OneSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	
	
}
void YellowJ3()
{
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	Write_ZeroSHIF2();
	
}

void GreenJ4()
{
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_OneSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	
	
}
void YellowJ4()
{   
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF1();
	Write_ZeroSHIF1();
	Write_OneSHIF1();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_ZeroSHIF2();
	Write_OneSHIF2();
	
	
}

void Write_OneSHIF1()
{
	PORTD=0b00000011;
	_delay_ms(10);
	PORTD=0b00000000;
	PORTD=0b00000100;
	PORTD=0b00000000;
}

void Write_ZeroSHIF1()
{
	PORTD=0b00000001;
	_delay_ms(10);
	PORTD=0b00000000;
	PORTD=0b00000100;
	PORTD=0b00000000;
}

void Write_OneSHIF2()
{
	PORTD=0b00011000;
	_delay_ms(10);
	PORTD=0b00000000;
	PORTD=0b00100000;
	PORTD=0b00000000;
}

void Write_ZeroSHIF2()
{
	PORTD=0b00001000;
	_delay_ms(10);
	PORTD=0b00000000;
	PORTD=0b00100000;
	PORTD=0b00000000;
}
