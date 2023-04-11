#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: the number of arguments
  * @argv: array of strings holds the arguments
  * Return: 0
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0, num;

	while (i < argc)
	{
		num = i;
		i++;
	}
	printf("%d\n", num);

	return (0);
}
