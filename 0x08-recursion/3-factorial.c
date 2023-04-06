#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number.
  * @n: an integer input
  * Return: 1 -->> if n equal to 0 or 1
  *		-1 -->> if n is lower than 0 'negative'
  *		otherwise returns the factorial
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
