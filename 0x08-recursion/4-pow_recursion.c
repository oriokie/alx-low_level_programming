#include "main.h"
/**
 * _pow_recursion - function that returns the value of x^y
 * @x: the value to be raised
 * @y: the power
 * Return: -1 for y < 0 and 1 for success
 */
int _pow_recursion(int x, int y)
{
	/* ERROR: if y is lower than x  */
	if (y < 0)
	{
		return (-1);
	}
	/*BASE CASE: number raised to 0 */
	else if (y == 0)
	{
		return (1);
	}
	/*Recursion */
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
