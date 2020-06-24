#include "holberton.h"

/**
  *rev_string - Reverse a string
  *@s: int *
  *
  *Return: nothing
  */

void rev_string(char *s)
{
	int i = 0;
	int k = 0;
	int r = 0;

	while (s[i])
	{
		i++;
	}
	i--;

	while (k <= i + 1 / 2)
	{
		r = s[k];
		s[k] = s[i];
		s[i] = r;

		i--;
		k++;
	}
}
