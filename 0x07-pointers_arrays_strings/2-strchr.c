#include "holberton.h"

/**
  *_strchr - Function that locates a char in a string
  *
  *@s: string *
  *@c: char to find
  *
  *Return: the first occurence of the char c in the string s,
  *or NULL.
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
