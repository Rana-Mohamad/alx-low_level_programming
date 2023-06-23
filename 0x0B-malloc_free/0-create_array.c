#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 *	and initializes it with a specific char
 * @size: unsigned integer
 * @c: char
 * Return: NULL if size = 0, and a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
