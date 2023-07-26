#include "main.h"
/**
* _strncpy - function that copies a string
* @dest: destination string
* @src: source string
* @n: limiter
* Return: pointer to the copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
