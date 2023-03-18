#include <stdio.h>

/**
  * main - entry point
  * Return: always 0 (Success)
  */

int main(void)
{
	char i = '0';
	char alph = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
