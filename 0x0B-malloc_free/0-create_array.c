#include "holberton.h"

/**
  *create_array - Create an array of specific characters
  *@size: size of array
  *@c: char
  *
  *Return: Null, or j
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	 j = (char *)malloc(sizeof(c) * size);

	if (size == 0 || j == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(j + i) = c;
	}
	return (j);
}




