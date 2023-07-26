#include "main.h"
/**
* _strncat - function that concenates two strings
* @dest: destination string
* @src: source string
* @n: limiter
* Return: destination as a pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	/* initializing variables */
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j < n)
			dest[i] = src[j];
			j++;
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
