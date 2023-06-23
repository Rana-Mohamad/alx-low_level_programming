#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point, a program that multiplies two numbers
 * @argc: counter
 * @argv: vector
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	return (0);
}
