#include "main.h"

/**
  * print_numbers - prints numbers from 0 -> 9
  */

void print_numbers(void)
{
	int i = 0;

	while (i >= 48 && i <= 57)
	{
		_putchar(i - 48);
		i++;
	}
	_putchar('\n');
}
