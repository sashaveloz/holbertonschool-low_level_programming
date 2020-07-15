#include "function_pointers.h"

/**
  * print_name - Prints a name
  *@name: name
  *@f: pointer to function
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
