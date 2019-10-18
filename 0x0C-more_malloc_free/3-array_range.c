#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that duplicates an array
 * @min: string array
 * @max: string array
 *
 * Return: poiter
 */
int *array_range(int min, int max)
{
	int *a;
	int b, c;

	if (min > max)
		return (NULL);
	b = max - min;
	a = malloc(sizeof(int) * (b + 1));
	if (a == NULL)
		return (NULL);
	for (c = 0; c <= b; c++)
		a[c] = min++;
	return (a);
}
