#include "main.h"

/**
  * swap_int - function that swaps the values of two integers
  * @a: integer parameter
  * @b: integer parameter
  */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
