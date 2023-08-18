#include "variadic_functions.h"
/**
 * print_strings - this function prints strings, followed by a new line
 * @separator: This is the string to be printed between the strings
 * @n: the number of the strings to be passed to the print_strings function
 *
 * Return: Always 0 to depict success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
