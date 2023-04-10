#include "main.h"

/**
  * _strcmp - function that compares two strings
  * @s1: string parameter
  * @s2: string parameter
  * Return: res
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0, res;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else
		{
			res = s1[i] - s2[i];
		}
		i++;
	}

	return (res);
}
