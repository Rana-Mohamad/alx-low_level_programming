#include "main.h"

/**
 * is_prime_number - a function to see if the integer number is prime
 * @n: an integer number
 * Return: 1 -->> if prime, otherwise 0
 */

int is_prime_number(int n)
{
	int i = n;
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 || n == 3)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	i--;
		is_prime_number(n);
	
}
