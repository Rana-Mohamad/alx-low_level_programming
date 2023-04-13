#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - a function that allocates memory using malloc
  * @b: amount of bytes
  * Return: a pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *new_m;

	new_m = malloc(b);

	if (new_m == NULL)
	{
		exit(98);
	}

	return (new_m);
}
