#include "dog.h"

/**
  * init_dog - Function that initialize a var of type struct dog
  *@d: dir of struct dog
  *@name: * to the name in the struct
  *@age: dog´s age
  *@owner: * to the owner to the struct
  *Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
