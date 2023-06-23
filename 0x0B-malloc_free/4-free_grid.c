#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: pointer to 2d grid
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
