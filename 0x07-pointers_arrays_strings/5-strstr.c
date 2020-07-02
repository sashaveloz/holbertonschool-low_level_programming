#include "holberton.h"

/**
  * _strstr - Function that locates a substring
  *
  *@haystack: char *
  *@needle: char *
  *
  *Return: a pointer to the beggining of the located substring
  * or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack)
	{
		b = haystack;
		a = needle;

		while (*a == *haystack && *a)
		{
			haystack++, a++;
		}

		if (*a == '\0')
			return (b);
		haystack = b + 1;
	}
	return (0);
}
