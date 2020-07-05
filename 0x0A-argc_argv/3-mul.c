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
		printf("Error");
		printf("\n");
		return (1);
	}

	b = atoi(argv[1]);
	a = atoi(argv[2]);
	
	printf("%d\n", a*b);

	return (0);
}
