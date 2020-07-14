#include "dog.h"

/**
  *free_dog - frees dogs
  *@d: * to struct dog
  *
  *Return: void
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
}
