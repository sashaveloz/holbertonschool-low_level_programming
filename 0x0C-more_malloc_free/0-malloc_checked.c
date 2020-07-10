#include "holberton.h"

/**
  *malloc_checked - function that allocates memory using malloc
  *
  *@b: unsigned int
  *
  *Return: * or 98(exit)
  */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
