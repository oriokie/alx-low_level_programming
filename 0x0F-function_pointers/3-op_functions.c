#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that returns the sum of a and b
 * @a: First integer
 * @b: Second integer
 * Return: the sum of integer a and b
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that finds the difference of a and b
 * @a: First integer
 * @b: Second integer
 * Return: the difference between a and b
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of a and b
 * @a: First integer
 * @b: Second integer
 * Return: product of a and b
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that return the division of a and b
 * @a: First integer
 * @b: Second integer
 * Return: result of the division between a and b
 **/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the reminder of the division of a and b
 * @a: First  integer
 * @b: Second integer
 * Return: remainder of division of a and b
 **/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
