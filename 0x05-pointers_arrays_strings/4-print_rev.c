#include "holberton.h"

/**
 * print_rev - function to print an array in reverse
 * @s: for characters
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
int count = 0;
while (*s != 0)
{
s++;
count++;
}
s--;
while (count - 1 >= 0)
{
_putchar(*s);
count--;
s--;
}
_putchar('\n');
}
