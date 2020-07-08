#include "holberton.h"

/**
  *alloc_grid - returns a pointer to a 2 dimensional array of integers
  *@width: int given
  *@height: int given
  *Return: NULL or grid
  */

int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == '\0')
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grid);
			}
			free(grid);
			return ('\0');
		}
	}

	for (i = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	return (grid);
}
