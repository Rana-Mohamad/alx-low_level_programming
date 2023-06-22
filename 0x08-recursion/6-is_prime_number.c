#include "main.h"

/**
 * primeCheck - checks if the number is prime
 * @n: integer number
 * @i: integer number
 * Return: 1 if prime
 */

int primeCheck(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (i > 1)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (primeCheck(n, i - 1));
		}
	}
}

/**
 * is_prime_number - a function to see if the integer number is prime
 * @n: an integer number
 * Return: 1 -->> if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 || n == 3)
	{
		return (1);
	}
	else
	{
		return (primeCheck(n, n - 1));
	}
}
