#include "main.h"

/**
 * len - function that returns the length of a string
 * @s: the string to be evaluated
 * Return: 0 and 1
 */

int len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + len(s + 1));
}

/**
 * helper - helper function
 * @s: the string
 * @start: the start of the string
 * @end: the end of the string
 * Return: 1 and 0
 */
int helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}

	return (helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - the function that checks the string
 * @s: the string
 * Return: 1 and 0
 */
int is_palindrome(char *s)
{
	int len = len(s);

	return (helper(s, 0, len - 1));
}
