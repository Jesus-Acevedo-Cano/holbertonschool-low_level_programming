#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that allocate memory
 * @width: grid
 * @height: grid
 *
 * Return: poiter
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);
		if (a[b] == NULL)
		{
			for (c = 0; c < b; c++)
			{
				free(a[c]);
			}
			free(a);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}
	return (a);
}
