#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: size of array
 * @c: string array
 *
 * Return: poiter
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(size * sizeof(c));

	if (a == NULL || size == 0)
		return (NULL);
	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);

}
