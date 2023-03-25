#include "main.h"

/**
  * print_square - function that prints a square
  * @size: input
  */

void print_square(int size)
{
	int row, rnum;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rnum = 0; rnum < size; rnum++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
