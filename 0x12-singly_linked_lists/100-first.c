#include <stdio.h>

void myfunc(void) __attribute__ ((constructor));
/**
  *myfunc - prints a quote before main
  *Return: void
  */
void myfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
