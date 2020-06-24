#include "holberton.h"

/**
  * _strlen - Entry point
  * Returning lenght of string
  * Return: a
  * @s: string 'Holberton!'
  */

int _strlen(char *s)
{
	int a = 0;

	/**
	  *for(a = 0; s[a] != '\0'; a++)
	  *;
	  *return (a);
	  */

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
