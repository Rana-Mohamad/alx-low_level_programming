#include "main.h"

/**
  * rev_string - function that reverses a string
  * @s: char parameter
  */

void rev_string(char *s)
{
	int i, len;
	char ch;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < 1 / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
}
