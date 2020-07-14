#include "dog.h"
/**
 *_strdup - returns a pointer to a new string which is a duplicate of
 * the string.
 *@str: * string
 *Return: NULL or String
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
	}
	s = malloc(sizeof(char) * (a + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		s[a] = str[a];
	}
	s[a] = '\0';

	return (s);
}
/**
 *new_dog - function that creates a new dog
 *@name: * name
 *@age: age
 *@owner: * owner
 * Return: NULL or new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nm;
	char *ow;

	dog_t *doggy;

	nm = _strdup(name);
	ow = _strdup(owner);


	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}


	doggy = malloc(sizeof(dog_t));

	if (!doggy)
		return (NULL);

	doggy->name = nm;
	doggy->owner = ow;
	doggy->age = age;

	return (doggy);
}
