#include "main.h"
/**
* reverse_array - function that reverses an array
* @a: an array of integers
* @n: number of elements of the array to swap
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	for (; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
