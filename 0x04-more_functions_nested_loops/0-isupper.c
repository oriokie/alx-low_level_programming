#include "main.h"
#include <stdio.h>
/**
*_isupper - Functions that checks for uppercase character
*@c: character input
*Return: Awalys zero
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
