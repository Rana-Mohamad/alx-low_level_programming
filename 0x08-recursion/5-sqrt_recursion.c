#include "main.h"

/**
  * pre_sqrt_recursion - it helps to find the square root of @n
  * @n: an integer input
  * @i: iteration
  * Return: -1 -->> If n does not have a natural square root
  *		0 -->> if n equal to 0
  *		otherwise return the square root
  */


int pre_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (pre_sqrt_recursion(n, i + 1));
}

/**
  * _sqrt_recursion - function that returns the natural square root of a number
  * @n: an integer input
  * Return: -1 -->> If n does not have a natural square root
  *		0 -->> if n equal to 0
  *		otherwise return the square root
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (pre_sqrt_recursion(n, 0));
}
