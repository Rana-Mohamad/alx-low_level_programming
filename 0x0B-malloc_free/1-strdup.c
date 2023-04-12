#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function returns a pointer to a new string
  *	which is a duplicate of the string @str
  * @str: a string to duplicate
  * Return: NULL if str = NULL
  */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	s = malloc(sizeof(char) * (j + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
