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

	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');

}
