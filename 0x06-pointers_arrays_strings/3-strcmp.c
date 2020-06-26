#include "holberton.h"

/**
  *_strcmp - Function that compares a string
  *@s1: string *
  *@s2: string *
  *Return: i or 0
  */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (j = 0; s1[j] != '\0'; j++)
	{
		i = s1[j] - s2[j];

			if (i != 0)
			{
				return (i);
			}
	}
	return (0);
}
