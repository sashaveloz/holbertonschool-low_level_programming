#include "holberton.h"

/**
  *print_numbers - Entry point
  *
  *Return: 0
  *
  */
void print_numbers(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
}
