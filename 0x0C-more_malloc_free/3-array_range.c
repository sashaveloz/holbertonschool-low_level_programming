#include "holberton.h"

/**
  * array_range - function that creates an array of integers
  *@min: min int
  *@max: max int
  *
  *Return: NULL or *
  */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	i = max - min;

	ptr = malloc(sizeof(int) * (i + 1));

	if (!ptr)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++, min++)
	{
		ptr[j] = min;
	}
	return (ptr);
}
