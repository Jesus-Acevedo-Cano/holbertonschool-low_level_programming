#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that duplicates an array
 * @grid: string array
 * @height: string array
 *
 * Return: poiter
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
