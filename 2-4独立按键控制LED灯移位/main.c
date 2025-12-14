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
	unsigned char Lednum=0;
	P2=0xFE;
	while(1)
	{
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			Lednum++;
			if(Lednum>7)
				Lednum=0;
			P2=~(0x01<<Lednum);
		}
		
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			if(Lednum==0)	
				Lednum=7;
			else			
				Lednum--;
			P2=~(0x01<<Lednum);
		}
	}
}
