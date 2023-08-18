#include "variadic_functions.h"
/**
 * print_int - function that prints integers
 * @list: List of arguments
 * @sep: Separator
 */
void print_int(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}
/**
 * print_char - Function that prints characters
 * @list: Character arguments
 * @sep: Separator
 */

void print_char(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_string - Function that prints strings
 * @list: List of arguments
 * @sep: Separator
 */

void print_string(va_list list, char *sep)
{
	char *s;

	/* assign string to pointer */
	s = va_arg(list, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s%s", sep, s);
}

/**
 * print_float - Function that prints floats
 * @list: List of arguments
 * @sep: Separator
 */

void print_float(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}

/**
 * print_all - Function that prints out all types of specifiers
 * @format: The list of variable arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *sep;
	int i, j;

	format_function formatFunctions[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == formatFunctions[j].type)
			{
				formatFunctions[j].func(args);
				if (format[i + 1] != '\0')
					printf(", ");
				break;

			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
