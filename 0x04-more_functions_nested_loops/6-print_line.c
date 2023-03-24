#include "main.h"

/**
  * print_line - print a straight line
  * @n: input
  */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i >= 1 && i <= n)
			_putchar('_');
	}
	_putchar('\n');
}
