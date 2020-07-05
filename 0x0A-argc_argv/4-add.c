#include "holberton.h"

/**
  * main - Sum of two integers
  *@argc: int
  *@argv: *
  *
  * Return: 0, 1, Error
  */

int main(int argc, char *argv[])
{
	int i, j, c = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[i]);
	}

	printf("%d\n", c);
	return (0);

}
