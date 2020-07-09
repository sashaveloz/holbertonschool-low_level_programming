#include "holberton.h"

/**
  * free_grid - Frees a 2 dimensional grid previusly created
  * by alloc_grid function.
  *@grid: int **
  *@height: int
  *Return: nothing
  */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
