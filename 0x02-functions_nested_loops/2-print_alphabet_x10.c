#include "main.h"

/**
* print_alphabet_x10 - Prints ten lines of abc using _putchar
*
* Return: Always zero
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
