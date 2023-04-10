#include "main.h"

/**
  * _abs - it computes the absolute value of an integer
  * @n: takes integer input
  * Return: always 0
  */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

