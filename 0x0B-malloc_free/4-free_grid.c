#include "main.h"

/**
* free_grid - frees a 2d grid previously greated by alloc_grid function
* @grid: 2d array
* @height: number of rows
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
