#include "holberton.h"

/**
  *puts_half - Print a half of a string
  *
  *Return: nothing
  *@str: char *
  */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i])
	{
		i++;
	}

	if (i % 2 == 1)
		/*n = i - 1;*/
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}
	for (; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
