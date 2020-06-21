#include "holberton.h"

/**
  *more_numbers - Entry point
  *Print 0-14 10 times
  *
  *
  *
  */

void more_numbers(void)
{
	char n;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n / 10 > 0)

				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');
		}

		_putchar('\n');
	}
}
