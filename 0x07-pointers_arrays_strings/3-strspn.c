#include "main.h"

/**
  * _strspn - function that gets the length of a prefix substring
  * @s: pointer to string input
  * @accept: substring prefix to look for
  * Return: the number of bytes in the initial segment
  */

unsigned int _strspn(char *s, char *accept)
{
	int h = 1, i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				h = 0;
				break;
			}
			j++;
		}
		if (h == 1)
		{
			break;
		}
		i++;
	}
	return (i);
}
