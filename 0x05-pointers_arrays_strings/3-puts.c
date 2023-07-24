#include "main.h"
/**
* _puts - prints a given string
* @str: string to be printed
* Return: no return
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
