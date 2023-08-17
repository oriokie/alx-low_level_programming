#include "variadic_functions.h"
/**
 * sum_them_all - a function that sums all the given paramaters
 * @n: arguments passsed to function
 *
 * Return: sum of all the items
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list list;
	unsigned int i;
	int sum = 0;

	while (n != 0)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}

		var_end(list);

		return (sum);
	}
}
