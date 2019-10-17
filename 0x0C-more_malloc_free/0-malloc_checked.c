#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that creates an array
 * @b: unsigned int
 *
 * Return: poiter
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	else
	{
		return (a);
	}
}
