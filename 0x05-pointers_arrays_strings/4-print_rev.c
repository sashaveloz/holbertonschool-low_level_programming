#include "holberton.h"

/**
  * print_rev - Entry point
  * Printing reverse string
  * @s: string
  *
  */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;

	for (; s[a] >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');

}
