#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given a parameter of each
 * element of an array
 * @array: array of numbers
 * @size: size of the array
 * @action: this is the pointer to the function that we need to use
 * Return: Nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && size && action)
	{
		a = 0;

		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
