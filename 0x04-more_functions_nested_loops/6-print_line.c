#include "holberton.h"
/**
 * print_line - to print line untill 0
 * @n: variable of n value
 *
 * Return: Always 0 (Success)
 *
 *
 */
void print_line(int n)
{
for ( ; n > 0; n--)
{
_putchar('_');
}
_putchar('\n');
}
