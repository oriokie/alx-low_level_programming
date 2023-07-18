#include "main.h"
/**
* main - lets print 10 times
* print_alphabet_x10 - prints 10 abc
* Return : success
*/
void print_alphabet_x10(void)
{
	int n = 0;
	char letter;

	while (n < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		n++;
		_putchar('\n');
	}
}
