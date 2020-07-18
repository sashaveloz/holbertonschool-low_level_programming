#include "variadic_functions.h"

/**
  *print_all - function that prints anything.
  *@format: list of types of arguments passed to
  *the function
  *Return: void
  */

void print_all(const char * const format, ...)
{
	va_list i;
	int j, m;
	char *separator = "";

	op_t a[] = {{"s", print_string},
		{"c", print_char},
		{"f", print_float},
		{"i", print_integer},
		{NULL, NULL}};

	va_start(i, format);

	j = 0;
	while (format && format[j])
	{
		m = 0;
		while (a[m].op)
		{
			if (a[m].op[0] == format[j])
			{
				printf("%s", separator);
				a[m].f(i);
				separator = ", ";
			}
			m++;
		}
		j++;
	}
	printf("\n");
	va_end(i);
}

/**
  *print_char - function that prints a char
  *@c: char
  *Return: void
  */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
  *print_string - functiont that prints a string
  *@s: string
  *Return: void
  */
void print_string(va_list s)
{
	char *c;

	c = va_arg(s, char *);
	if (!c)
		c = "(nil)";
	printf("%s", c);
}

/**
  *print_integer - function that prints an integer
  *@i: int
  *Return: void
  */
void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
  *print_float - function that prints a float
  *@f: double
  *Return: void
  */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
