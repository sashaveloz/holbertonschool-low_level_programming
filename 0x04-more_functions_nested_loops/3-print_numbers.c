#include "holberton.h"

/**
  * Printing 0 to 9
  *print_number - Entry point
  *@n: number
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
