#include "main.h"
/**
 * _puts_recursion - function that prints a sting and then a new line
 * @s: this is the sting to be printed
 * Return: Always zero
 */
void _puts_recursion(char *s)
{
	/* The base of the recursion program */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/*Recursion margic */

	_putchar(*s);
	_puts_recursion(s + 1);
}
