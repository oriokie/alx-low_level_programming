#ifndef VAR
#define VAR
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct format_function - Holds information about a format
 * specifier and its handling function.
 * @type: The format specifier character.
 * @func: A function pointer to the handling function for the format specifier.
 */
typedef struct formatter
{
	char type;
	void (*func)(va_list);
} format_function;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
