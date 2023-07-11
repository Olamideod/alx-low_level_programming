#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory allocated for the grid
 * created by the alloc_grid()
 * @grid: grid to be free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}


