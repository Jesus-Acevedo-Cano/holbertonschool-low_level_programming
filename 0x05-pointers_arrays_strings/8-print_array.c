#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print elements of an array
 * @a: array variable
 * @n: array variable
 *
 * Return: is a void
 */

void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
printf("%i", a[b]);

if (b != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
