#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _isDigit - checks if the input is digit
  * @s: string to check
  * Return: 1 -->> if not a number, otherwise returns 0
  */

int _isDigit(char s[]);


/**
  * main - a program that adds positive numbers
  * @argc: the number of arguments
  * @argv: array of strings holds the arguments
  * Return: 1 -->> If one of the number contains symbols that are not digits
  *		otherwise returns 0
  */

int main(int argc, char *argv[])
{
	int i = 0, num, sum;

	while (i < argc)
	{
		num = i;
		i++;
	}
	if (num == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
	{
		if (_isDigit(argv[i]) != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	}
	return (0);
}

/**
  * _isDigit - checks if the input is digit
  * @s: string to check
  * Return: 1 -->> if not a number, otherwise returns 0
  */

int _isDigit(char s[])
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(s[i]))
		{
			return (1);
		}
	}
	return (0);
}
