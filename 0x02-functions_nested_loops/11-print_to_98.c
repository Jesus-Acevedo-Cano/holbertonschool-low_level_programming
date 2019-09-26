#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - to print from n to 98
 * @n: for integers
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
}
}
}
if (n >= 98)
{
for (; n <= 98; n--)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
}
}
printf("\n");
}
}
