#include "main.h"

/**
  * reverse_array - function that reverses the content of an array of integers
  * @a: integer parameter
  * @n: integer parameter
  */

void reverse_array(int *a, int n)
{
	int value, f, s;

	f = 0;
	s = n - 1;

	while (f < s)
	{
		value = a[f];
		a[f] = a[s];
		a[s] = value;
		f++;
		s--;
	}
}
