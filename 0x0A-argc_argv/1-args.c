#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point,
 *	a program that prints the number of arguments passed into it.
 * @argc: counter
 * @argv: vector
 * Return: always 0 (Success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
