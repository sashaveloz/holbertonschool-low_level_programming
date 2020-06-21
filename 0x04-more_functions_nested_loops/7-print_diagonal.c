#include "holberton.h"

/**
  * print_diagonal - Entry point
  *@n: takes integer
  *
  */

void print_diagonal(int n)
{
	int l;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (l = 0; l < n; l++)
	{
		for (s = 0; s <= l; s++)
		{
			if (s == l)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
