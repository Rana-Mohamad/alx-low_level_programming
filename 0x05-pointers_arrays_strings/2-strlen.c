#include "main.h"

/**
  * _strlen - function that returns the length of a string
  * @s: character parameter
  */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
