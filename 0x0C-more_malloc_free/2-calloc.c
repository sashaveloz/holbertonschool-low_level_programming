#include "holberton.h"

/**
  * _calloc - function that allocates memory for an array, using malloc
  *@nmemb: number of members
  *@size: size
  *
  *Return: NULL or *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
	}

	ptr[i] = 0;
	return (ptr);
}
