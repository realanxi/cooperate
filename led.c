#include <reg51.h>

sbit led=P1^0;

void main()
{
	for(int i=0;i<10;i++)
	{
		printf("%d\r\n",i);
	}
	led = 0;
}qwe
