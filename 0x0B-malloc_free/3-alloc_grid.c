#include <stdlib.h>
#include "main.h"
/**
 * check_null - prototype
 * @a: int
 * Return: NULL
 */
int check_null(int a);

/**
 * *alloc_grid - function that creates a two dimensional array of int
 * @width: the width of the matrix or array
 * @height: the height of the array
 * Return: the pointer to the matrix
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	check_null(width);
	check_null(height);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j < i; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
/**
 * check_null - function that checks for a null height or width
 * @a: the int to be checked
 * Return: NULL
 */
int check_null(int a)
{
	if (a <= 0)
	{
		return (NULL);
	}
}
