#include "holberton.h"

/**
  * _strncat - function that concatenates two strings
  *@dest: char *
  *@src: char *
  *@n: int *
  *Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
