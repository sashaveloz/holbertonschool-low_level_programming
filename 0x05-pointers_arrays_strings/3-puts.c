#include "holberton.h"

/**
  * _puts - Entry point
  * Prints a string to stdout
  *@str: string
  *
  */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
		_putchar('\n');
}
