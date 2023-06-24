#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: array old size
 * @new_size: array new size
 * Return: pointer to new memory or NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	temp_ptr = ptr;
	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = temp_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
