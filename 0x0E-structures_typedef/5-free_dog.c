#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - a function that frees dogs
  * @d: pointer to struct dog
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
