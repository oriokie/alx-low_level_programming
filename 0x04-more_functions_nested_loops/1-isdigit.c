#include "main.h"
/**
* _isdigit - function checks for a digit 0 to 9
* @c: digit to the checked
* Return: 1 if digit 0 Otherwise
*/
int _isdigit(int c)
{
	if (c >=  '0' && c <= '9')
		return (1);
	else
		return (0);
}
