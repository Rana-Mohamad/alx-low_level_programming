#include <stdlib.h>
#include <stdio.h>

/**
 * main - ENTry point, program that prints all arguments it receives
 * @argc: counter
 * @argv: vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
