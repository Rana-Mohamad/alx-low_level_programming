#include "main.h"

/**
  * more_numbers - prints 10 times the numbers from 0 -> 14
  */

void more_numbers(void)
{
	int i, lnum, num;

	for (lnum = 0; lnum <= 9; lnum++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if (i > 9)
			{
				_putchar(49);
				num = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
