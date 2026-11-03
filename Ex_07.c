#include <reg51.H>
sbit r1 = P2 ^ 0;
sbit y1 = P2 ^ 1;
sbit g1 = P2 ^ 2;
sbit r2 = P2 ^ 3;
sbit y2 = P2 ^ 4;
sbit g2 = P2 ^ 5;
sbit r3 = P3 ^ 0;
sbit y3 = P3 ^ 1;
sbit g3 = P3 ^ 2;
void delay()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10000; j++)
        {
        }
    }
}
void main()
{
    P2=0X00;
		P3=0x00;
    while (1)
    {
      r1=1;
			y1=0;
			g1=0;
			r2=0;
			y2=1;
			g2=0;
			r3=0;
			y3=0;
			g3=1;
       delay();
      r1=0;
			y1=1;
			g1=0;
			r2=0;
			y2=0;
			g2=1;
			r3=0;
			y3=1;
			g3=0;
      delay();
      r1=0;
			y1=0;
			g1=1;
			r2=0;
			y2=1;
			g2=0;
			r3=1;
			y3=0;
			g3=0;
      delay();
      r1=0;
			y1=1;
			g1=0;
			r2=1;
			y2=0;
			g2=0;
			r3=0;
			y3=1;
			g3=0;
      delay();
      

    }
}