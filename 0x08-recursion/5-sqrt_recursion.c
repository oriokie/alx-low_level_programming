#include "main.h"
/**
 * helper - function that tries to evaluate the number
 * @a: n
 * @b: starts at 1 to n
 * Return: 1 - OK; -1 error
 */
int helper(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (helper(a, b + 1));
}
/**
 * _sqrt_recursion - function that returns a natural square root of a number
 * @n: number to be used
 * Return: Error -1
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
