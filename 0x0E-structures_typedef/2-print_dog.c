#include <stdio.h>
#include "dog.h"

/**
  * print_dog - a function that prints a struct dog
  * @d: a pointer to struct dog
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf();
	}
	else
	{
		printf("Name: ");
		if (d->name == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", d->name);
		}

		printf("Age: ");
		if (d->age == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%d\n", d->age);
		}

		printf("Owner: ");
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", d->owner);
		}
	}
}
