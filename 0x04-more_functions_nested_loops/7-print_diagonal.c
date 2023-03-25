#include "main.h"


/**
  * print_diagonal - prints a diagonal line in the terminal
  * @n: input
  */

void print_diagonal(int n)
{
/*	int i, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (spc = 1; spc <= i; spc++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	*/
int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; ++postn)
		{
			for (space = 1; space <= postn; ++space)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
