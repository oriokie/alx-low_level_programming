#include "main.h"
/**
* rev_string - function that prints a string, in reverse
* @s: string to be reversed
* Return: no return
*/
void rev_string(char *s)
{
	int length = 0;
	int i, j;

	while (s[length] != '\0')
		length++;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
