#include "main.h"

/**
  * _pow_recursion - a function that returns the
  *		value of x raised to the power of y
  * @x: an integer input
  * @y: an integer input
  * Return: -1 -->> if y is lower than 0
  *		1 -->> if y is equal to 0
  *		otherwise returns the value of x raised to the power of y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
