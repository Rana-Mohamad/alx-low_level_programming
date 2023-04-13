#include "main.h"
#include <stdlib.h>

/**
  * array_range - function that creates an array of integers
  * @min: minimum number of elements
  * @max: maximum number of elements
  * Return: pointer to the newly created array
  *	or NULL if it fails or if min > max
  */

int *array_range(int min, int max)
{
	int i, *ary;

	if (min > max)
	{
		return (NULL);
	}

	ary = malloc((max - min + 1) * sizeof(int));

	if (ary == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ary[i] = min;
		min++;
	}

	return (ary);
}
