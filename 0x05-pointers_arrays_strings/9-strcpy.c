#include "main.h"
/**
* _strcpy - function that copies the string pointed by src
* @dest: destination for the string
* @src: the string to be copied
* Return: String
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
