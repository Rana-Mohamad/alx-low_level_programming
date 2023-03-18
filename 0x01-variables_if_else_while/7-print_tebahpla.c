#include <stdio.h>

/**
  * main - entry point
  * Return: always 0 (Success)
  */

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');

	return (0);
}
