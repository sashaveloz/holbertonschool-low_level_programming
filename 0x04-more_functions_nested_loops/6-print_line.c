#include "holberton.h"

/**
  *print_line - Entry point
  *
  *@n: takes an integer
  */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (a <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
