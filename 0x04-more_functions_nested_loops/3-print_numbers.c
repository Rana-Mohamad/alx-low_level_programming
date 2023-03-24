#include "main.h"

/**
  * print_numbers - prints numbers from 0 -> 9
  */

void print_numbers(void)
{
	char i = '0';

	for (i >= '0' && i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
