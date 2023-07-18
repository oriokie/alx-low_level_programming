#include "main.h"
/**
* _islower - Checks if a character is lower case
*
* @c: The Character to be checked
*
* Return: 1 if the character is lowercase
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

