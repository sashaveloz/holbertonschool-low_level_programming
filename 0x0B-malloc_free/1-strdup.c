#include "holberton.h"

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
