#include "main.h"


/**
  * print_diagonal - prints a diagonal line in the terminal
  * @n: input
  */

void print_diagonal(int n)
{
	int i, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (spc = 1; spc <= i; spc++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
