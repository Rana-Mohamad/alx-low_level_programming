#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars,
  *	and initializes it with a specific char
  * @size: the array size
  * @c: char to initialize the array
  * Return: an array
  */

char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
