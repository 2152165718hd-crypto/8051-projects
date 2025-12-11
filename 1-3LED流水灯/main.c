#include <REGX52.H>
#include<INTRINS.H>

void Delay100ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 5;
	j = 52;
	k = 195;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}



void main()
{
	while(1)
	{
		P2=0xFE;
		Delay100ms();
		P2=0xFD;
		Delay100ms();
		P2=0xFB;
		Delay100ms();
		P2=0xF7;
		Delay100ms();
		P2=0xEF;
		Delay100ms();
		P2=0xDF;
		Delay100ms();
		P2=0xBF;
		Delay100ms();
		P2=0x7F;
		Delay100ms();
	}
}