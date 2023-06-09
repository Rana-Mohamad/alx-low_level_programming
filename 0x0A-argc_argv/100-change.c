#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point, a program that prints the minimum number of
 *	coins to make change for an amount of money.
 * @argc: counter
 * @argv: array
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, num, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			res++;
			num -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
