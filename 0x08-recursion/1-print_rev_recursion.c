#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be printed in reverse
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	/*BASE CASE - end of the string */
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
