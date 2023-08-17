#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the array to be searched
 * @size: number of items in the array to be searched
 * @cmp: the pointer to the function that will be used to compare values
 * Return: -1 for items not matching, and 1 if matching. -1 if size is less
 * than or equal to zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;
	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		counter = 0;

		while (counter < size)
		{
			if (cmp(array[counter]) != 0)
			{
				return (counter);
				counter++;
			}
		}
	}
	return (-1);
}
