#include "main.h"
/**
* jack_bauer - function for printing every minute
* Return: Always zero
*/
void jack_bauer(void)
{
	for (int a = 0; a <= 23; a++)
	{
		for (int b = 0; b <= 59; b++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');
		}


	}

}
