#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: bytes of second string to add to first string to be a new string
  * Return: pointer shall point to a newly allocated space in memory,
  *	which contains s1, followed by the first n bytes of s2, and null terminated
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int fl, sl, i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	fl = sl = 0;

	while (s1[fl] != '\0')
	{
		fl++;
	}
	while (s2[sl] != '\0')
	{
		sl++;
	}
	if (n >= 12)
		n = 12;
	str = (char *) malloc((fl + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
