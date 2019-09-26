#include "holberton.h"
/**
 * print_diagonal - to print a diagonal line
 * @n: for variable n
 *
 * Return: Always 0 (Success)
 *
 *
 */
void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0 ; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (a == b)
{
_putchar('\\');
break;
}
else
{_putchar(' ');
}
}
_putchar('\n');
}
}
}
