#include "holberton.h"

/**
  *puts_half - Print a half of a string
  *
  *Return: nothing
  *@str: char *
  */

void puts_half(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
}
a = a + 1;
for (a = a / 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
_putchar('\n');

}
