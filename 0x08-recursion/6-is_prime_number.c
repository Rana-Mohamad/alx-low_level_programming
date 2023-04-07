#include "main.h"

/**
  * is_prime_number - function that returns if the number in prime
  * @n: an integer input
  * Return: 1 -->> if the input is a prime number, otherwise return 0;
  */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 0 || n == 1)
	{
		return (1);
	}

	if (n == i)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (1);
	}
	i++;

	return (is_prime_number(n));
}
