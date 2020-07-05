#include "holberton.h"

/**
  * main - Print all arguments of a string
  *@argc: int
  *@argv: *
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
