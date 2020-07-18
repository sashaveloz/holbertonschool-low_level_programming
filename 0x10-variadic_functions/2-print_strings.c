#include "variadic_functions.h"

/**
  *print_strings - funciotn that prints strings
  *@separator: the string to be printed between the strings
  *@n: number of strings passed to the function
  *Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list j;
	unsigned int i;
	char *m;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		m = va_arg(j, char *);

		if (m)
			printf("%s", m);

		else
			printf("(nil)");

		if (separator && i < (n - 1))
			printf("%s", separator);

	}

	printf("\n");

	va_end(j);
}
