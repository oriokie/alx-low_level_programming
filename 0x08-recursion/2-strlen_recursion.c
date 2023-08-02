#include "main.h"
/**
 * _strlen_recursion - function that return the length of string s
 * @s: the string under question
 * Return: Always zero
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	/**BASE CASE - end of the string */
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	/*Recursively calling the function */
	return (1 + _strlen_recursion(s + 1));
	}
}
