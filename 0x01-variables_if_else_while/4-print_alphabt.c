#include <stdio.h>

/**
  * main - entry point
  * Return: always 0 (Success)
  */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if(alph == 'e' || alph == 'q')
		{
			++alph;
		}
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
