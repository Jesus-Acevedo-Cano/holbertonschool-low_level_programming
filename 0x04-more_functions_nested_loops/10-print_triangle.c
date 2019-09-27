#include "holberton.h"
/**
 * print_triangle - to print a # triangle
 * @size: for size of triangle
 *
 * Return: Always 0 (Success)
 *
 *
 */
void print_triangle(int size)
{
int a, b, c;

if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = 0; b < (size - a); b++)
{
_putchar(' ');
}
for (c = 0; c < (size - (size - a)); c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
