#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters
  *@n: amount of arguments
  *Return: the sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list c;
	int j;

	if (n == 0)
		return (0);

	va_start(c, n);

	for (i = 0; i < n; i++)
		j += va_arg(c, int);

	va_end(c);

	return (j);


}
