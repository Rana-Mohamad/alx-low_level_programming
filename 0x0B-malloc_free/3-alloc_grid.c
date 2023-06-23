#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: the array width
 * @height: the array height
 * Return: NULL on failure of If width or height is 0 or negative
 *	otherwise returns a pointer to an array
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
