#include "main.h"
/**
*print_alphabet - print a to zz
*
* Return - Success
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= "z")
	{
		_putchar(letter);
		letter++;
	}
		_putchar("\n");
}
