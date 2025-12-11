#include <REGX52.H>
#include<INTRINS.H>
void Delay200ms();
void main()
{
	while(1)
	{
		P2=0xFE;  //1111 1110
		Delay200ms();
		P2=0xFF;  //1111 1111
		Delay200ms();
	}
}

//ÑÓÊ±º¯Êý200ms
void Delay200ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 10;
	j = 31;
	k = 147;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

