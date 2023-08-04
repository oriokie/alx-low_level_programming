#include "main.h"
/**
* _strcat - function that concenates two strings
* @dest: - dest string
* @src: - src string
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	/* initializing the index counters */
	int index_dest = 0;
	int index_src = 0;

	/*Lets increment the index variables and write code */
	while (dest[index_dest] != '\0')
		index_dest++;
	while (src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}

	dest[index_dest] = '\0';

	return (dest);
}
