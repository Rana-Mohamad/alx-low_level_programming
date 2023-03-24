#include "main.h"

/**
  * more_numbers - prints 10 times the numbers from 0 -> 14
  */

void more_numbers(void)
{
	char i = '0';
	int lnum = 0;

	for (lnum >= 0; lnum <= 9; lnum++)
	{
		while (i >= '0' && i <= '14')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
