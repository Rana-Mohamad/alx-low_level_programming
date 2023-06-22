#include "main.h"

/**
 * sqrtSearch - a function to find the square root of a number
 * @low: the lowest number
 * @high: the highest number
 * @N: an integer number
 * @mid: the mid-value of the range
 * Return: the square root
 */

int sqrtSearch(int low, int n)
{
	if (low * low == n)
	{
		return (low);
	}
	else if (low * low < n)
	{
		return (sqrtSearch(low + 1, n));
	}
	else
	{
		return (-1);
}

/**
 * _sqrt_recursion - a function that returns the natural
 *	square root of a number.
 * @n: an integer number
 * Return: the natural square root of a number
 * or -1 if the number does not have a square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrtSearch(1, n));
	}
}

