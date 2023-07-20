#include "main.h"
/**
* print_numbers - function for printing numbers 0 to 9
* Return: Awlays zero
*/
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
