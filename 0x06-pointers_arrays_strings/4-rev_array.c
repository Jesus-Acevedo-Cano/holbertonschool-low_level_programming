#include <stdio.h>
#include "holberton.h"
/**
 * reverse_array - function that concatenates strings
 * @a: pointer to array of int elements
 * @n: integer
 * Return: is a void
 */

void reverse_array(int *a, int n)
{
int count, tem, inv = n - 1;

	for (count = 0; count < inv; count++, inv--)
	{
		tem = a[count];
		a[count] = a[inv];
		a[inv] = tem;
	}
}
