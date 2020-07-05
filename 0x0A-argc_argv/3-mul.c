#include "holberton.h"

/**
  * main - Multiplies two numbers
  *@argc: int
  *@argv: *
  *Return: -1
  */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[2]);
	a = atoi(argv[1]);

	printf("%d\n", a * b);

	return (0);
}
