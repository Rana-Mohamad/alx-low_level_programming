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
		for (rnum = 0; rnum <= size; rnum++)
		{
			for (i = 0; i <= size; i++)
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
