#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: input
  */

void print_triangle(int size)
{
	int i, rnum;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rnum = 1; rnum <= size; rnum++)
		{
			for (i = 1; i <= size; i++)
			{
				if ((i + rnum) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
