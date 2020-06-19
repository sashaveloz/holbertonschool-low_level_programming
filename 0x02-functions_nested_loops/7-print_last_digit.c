#include "holberton.h"
/**
  *print_last_digit - Entry point
  *@l: digit
  *Return: value of l
  */
int print_last_digit(int l)
{
	int lastdigit;

	lastdigit = l % 10;

	if (l < 0)
	{
		l = l * -1;
			lastdigit = l % 10;
	}
	_putchar('0' + lastdigit);
	return (lastdigit);
}
