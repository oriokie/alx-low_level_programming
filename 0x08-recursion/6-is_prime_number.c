#include "main.h"
/**
 * helper - helper function for the prime function
 * @n: interger
 * @div: divisor
 * Return: 1 and 0
 */
int helper(int n, int div)
{
	/** Checking if the divisor is greater than n, if true then n is prime */
	if (div * div > n)
	{
		return (1);
	}
	/* if n is divisible by the divisor: not prime */
	else if (n % div == 0)
	{
		return (0);
	}
	else
	{
		/*RECURSION: incrementing by 1: trying the next divisor */
		return (helper(n, div + 1));
	}
}
/**
 * is_prime_number - function that returns 1 if the input interger is a
 * a prime number
 * @n: number to be checked
 * Return: 1 for prime, otherwise zero
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper(n, 2));
	}
}
