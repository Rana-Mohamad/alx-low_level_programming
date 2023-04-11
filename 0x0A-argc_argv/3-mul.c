#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that multiplies two numbers
  * @argc: the number of arguments
  * @argv: array of strings holds the arguments
  * Return: 1 -->> if does not receive two arguments
  *		otherwise returns 0
  */

int main(int argc, char *argv[])
{
	int i = 0, num, mul;

	while (i < argc)
	{
		num = i;
		i++;
	}
	if (num < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
