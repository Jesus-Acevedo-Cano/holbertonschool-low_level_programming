#include "holberton.h"
/**
 * print_last_digit - to print last digit of a number
 * @c: for integers
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
c = c % 10;
if (c < 0)
{
c = c * -1;
}
_putchar(c + '0');
return (c);
}
