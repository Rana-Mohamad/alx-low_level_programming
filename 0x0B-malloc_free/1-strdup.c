#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 *	space in memory, which contains a copy of the string given as a parameter.
 * @str: a char input
 * Return: NULL if str = NULL, otherwise @str
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	c = malloc((j + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		c[i] = str[i];
		i++;
	}
	return (c);
}
