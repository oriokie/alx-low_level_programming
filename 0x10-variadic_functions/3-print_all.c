#include "variadic_functions.h"
/**
 * print_int - function that prints integers
 * @int_var: List of arguments
 */
void print_int(va_list int_var)
{
	printf("%i", va_arg(int_var, int));
}
/**
 * print_char - Function that prints characters
 * @list: Character arguments
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_string - Function that prints strings
 * @str_var: List of arguments
 */

void print_string(va_list str_var)
{
	char *s;

	/* assign string to pointer */
	s = va_arg(str_var, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

/**
 * print_float - Function that prints floats
 * @float_var: List of arguments
 */

void print_float(va_list float_var)
{
	printf("%f", va_arg(float_var, double));
}

/**
 * print_all - Function that prints out all types of specifiers
 * @format: The list of variable arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, count;
	char *comma = "";

	va_start(args, format);

	format_function form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	i = 0;

	while (format && format[i])
	{
		count = 0;
		while (form[count].type)
		{
			if (format[i] == *form[count].type)
			{
				printf("%s", comma);
				form[count].func(args);
				comma = ", ";
				break;
			}
			count++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}


