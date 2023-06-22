#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a string
 * @len: the string length
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int len += 1;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return len;
}
