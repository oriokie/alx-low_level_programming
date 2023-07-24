#include "main.h"
/**
* swap_int - swaps two integers
* @a: value 1
* @b: value 2
* Return: no return
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
