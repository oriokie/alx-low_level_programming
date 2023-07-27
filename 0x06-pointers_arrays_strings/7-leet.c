#include "main.h"
/**
* leet - function that encodes a string into 1337
* @s: string that should be encoded
* Return: string
*/
char *leet(char *s)
{
	char *encoded = s;
	char *p = s;

	while (*p != '\0')
	{
		char c = *p;

		if ((c == 'a' || c == 'A'))
		{
			*p = '4';
		}
		else if ((c == 'e' || c == 'E'))
		{
			*p = '3';
		}
		else if ((c == 'o' || c == 'O'))
		{
			*p = '0';
		}
		else if ((c == 't' || c == 'T'))
		{
			*p = '7';
		}
		else if ((c == 'l' || c == 'L'))
		{
			*p = '1';
		}
		p++;
	}
	return (encoded);
}
