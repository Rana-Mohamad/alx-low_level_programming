#include "main.h"

/**
  * puts2 - function that prints every other character of a string
  * @str: char parameter
  */

void puts2(char *str)
{
	int i;

	for (i = 0; str != '\0'; i++)
	{
		if (i = 0 || i % 2 == 0)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
