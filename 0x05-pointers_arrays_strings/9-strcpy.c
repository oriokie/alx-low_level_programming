#include <stdio.h>
/**
* *_strcpy - function that copies the string pointed by src
* @dest: destination for the string
* @src: the string to be copied
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
