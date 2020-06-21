#include "holberton.h"

/**
  *print_triangle - Prints a triangle
  *@size: size
  *
  */

void print_triangle(int size)
{
	int l, s, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (l = 1; l <= size; l++)
	{
		for (s = 1; s <= (size - l); s++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= l; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
