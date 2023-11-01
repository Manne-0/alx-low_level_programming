#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a two dim array
 * @grid: 2 dim array of integers
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
