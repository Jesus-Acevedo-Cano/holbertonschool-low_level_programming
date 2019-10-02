#include "holberton.h"

/**
 * puts_half - print the half string of an array
 * @str: for characters
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
int count = 0, a;
while (str[count] != '\0')
{
count++;
}
a = (count / 2) + (count % 2);
while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
