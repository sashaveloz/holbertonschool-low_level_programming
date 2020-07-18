#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *struct
  */
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
  *functions to print
  */
void print_char(va_list c);
void print_string(va_list s);
void print_integer(va_list i);
void print_float(va_list f);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H	*/
