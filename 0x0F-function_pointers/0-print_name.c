#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: the pointer to the name
 * @f: the print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
