#include "holberton.h"

/**
  * puts2 - function that prints every other character of a
  * string, starting with the first character
  *Return: nothing
  *
  *@str: char *
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
