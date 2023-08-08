#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees the memory allocated by the alloc_grid
 * function
 * @grid: the grid to free
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
		return;

	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
