#include "holberton.h"
/**
 *print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	char a;
	int abc;

	abc = 1;

	while (abc <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		abc++;
	}
}
