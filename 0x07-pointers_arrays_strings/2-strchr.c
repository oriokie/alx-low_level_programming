#include "main.h"
#define NULL ((void *)0)
/**
* _strchr - function that locates a character in a string
* @s: the string
* @c: the character
* Return: pointer to the first occurrence of the character c
*/
char *_strchr(char *s, char c);
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
			s++;
	}
	return (NULL);
}
