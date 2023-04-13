#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimensional grid
  * @grid: double pointer 2d grid
  * @height: height of grid
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
