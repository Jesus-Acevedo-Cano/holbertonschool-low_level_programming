#include "holberton.h"
/**
 * jack_bauer - to print a complete day hours and minutes
 * @void: for no value
 * Return: Always 0 (Success)
 */
void  jack_bauer(void)
{
int a, b;

for (a =00; b <= 23; a++)
{
for (b = 00; b < 60; b++)
{
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
_putchar(':');
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
_putchar('\n');
}
}
}
