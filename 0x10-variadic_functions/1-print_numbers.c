#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: the separator for the numbers to be printed
 * @n: the number of integers to be passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
		printf("\n");

	va_start(list, n);

	for (i = 0; i < n ; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(list, int));
			break;
		}
		else
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(list, int));
			}
			else
			{
				printf("%d%s", va_arg(list, int), separator);
			}
		}
		va_end(list);
}}

