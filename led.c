#include <reg51.h>

sbit led=P1^0;
sbit key = P1^2;

void main()
{
	for(int i=0;i<10;i++)
	{
		printf("%d\r\n",i);
	}
	led = 0;

  qwe

	if(key == 0)
	{
		led = ~led;
	}
}

