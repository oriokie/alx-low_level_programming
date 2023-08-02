#include "main.h"
/**
 * factorial - function that returns a factorial of a number
 * @n: interger n
 * Return: 1 for success and -1 for error
 */
int factorial(int n)
{
	/**BASE CASE - if n is lower than 0 */
	if (n < 0)
	{
		return (-1);
	}
	/* Factorial of 0 is 1 */
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	/* recursively call the function */
		return (n * factorial(n - 1));
	}
}
