#include "holberton.h"

/**
  * _strspn -  function that gets the length of a prefix substring
  *
  *@s: string *
  *@accept: string *
  *
  * Return: the number of bytes in the initial segment of s which
  * consist only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}
