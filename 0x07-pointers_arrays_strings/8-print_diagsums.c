#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - print sums of two diagonals of a square matrix of integers
 * @a: pointer to matrix
 * @size: matrix size
 *
 * Return: number
 */
void print_diagsums(int *a, int size)
{
	int b, c;
	int sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 = sum1 + a[(size + 1) * b];
	}
	for (c = 0; c < size; c++)
	{
		sum2 = sum2 + a[(size - 1) * (c + 1)];
	}
	printf("%i, %i\n", sum1, sum2);
}
