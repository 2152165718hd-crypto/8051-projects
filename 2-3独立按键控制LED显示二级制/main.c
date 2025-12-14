#include <REGX52.H>
#include<INTRINS.h>

void Delay(unsigned int xms)		//@11.0592MHz
{
	while(xms)
	{
		unsigned char i, j;

		_nop_();
		_nop_();
		_nop_();
		i = 11;
		j = 190;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

void main()
{
	unsigned char LEDnum=0;
	while(1)
	{
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			LEDnum++;
			P2=~LEDnum;
		}
	}
}
