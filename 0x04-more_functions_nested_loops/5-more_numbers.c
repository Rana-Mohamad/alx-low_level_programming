#include "main.h"

/**
  * more_numbers - prints 10 times the numbers from 0 -> 14
  */

void more_numbers(void)
{
	char i = '0';
	int ln = 0;

	for (ln >= 0; ln <= 9; ln++)
	{
		while (i >= '0' && i <= '14')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
