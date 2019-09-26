#include "holberton.h"
/**
 * print_square - to print a square
 * @size: for variable size
 *
 * Return: Always 0 (Success)
 *
 *
 */
void print_square(int size)
{
int a, b;
for (a = 0 ; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
