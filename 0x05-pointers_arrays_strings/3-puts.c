#include "main.h"

/**
  * _puts - function that prints a string
  * @str: char parameter
  */

void _puts(char *str)
{
	do
	{
		_putchar(*str);
		str++;
	}
	while (*str != '\0');
	_putchar('\n');
}
