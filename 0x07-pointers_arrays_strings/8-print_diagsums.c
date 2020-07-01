#include "holberton.h"

/**
  *print_diagsums - Prints the sum of two diagonals of a square
  * matrix of integers
  *
  *@a: int *
  *@size: int *
  *
  *Return: void
  */

void print_diagsums(int *a, int size)
{
	int i;
	int uno = 0, dos = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		uno += a[i];
	}
	for (i = size - 1; i < (size * size - 1); i += size - 1)
	{
		dos += a[i];
	}
	printf("%d, %d\n", uno, dos);
}
