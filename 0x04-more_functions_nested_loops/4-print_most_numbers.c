#include "holberton.h"
/**
 * print_most_numbers - to print numbers 0 to 9 without 2 and 4
 * @void: no argument
 *
 * Return: Always 0 (Success)
 *
 *
 */
void print_most_numbers(void)
{
char a;
for (a = '0'; a <= '9'; a++)
{
if (a != '2' && a != '4')
_putchar(a);
}
_putchar('\n');
}
