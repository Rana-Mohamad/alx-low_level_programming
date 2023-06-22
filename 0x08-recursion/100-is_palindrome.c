#include "main.h"

/**
 * last_index - returns the last index of a string
 * @s: string pointer
 * Return: the index
 */

int last_index(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += last_index(s + 1) + 1;
	}
	return (i);
}

/**
 * check - checks for the palimdrome
 * @s: a string pointer
 * @start: from right to left
 * @end: from left to right
 * @mod: modulus
 * Return: 1 -->> if palindrome otherwise 0
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, mod));
	}
}

/**
 * is_palindrome - a function check if a string is a palindrome
 * @s: a string pointer
 * Return: 1 -->> if palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int last = last_index(s);

	return (check(s, 0, last - 1, last % 2));
}
