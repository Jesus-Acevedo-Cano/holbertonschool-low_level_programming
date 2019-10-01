#include "holberton.h"

/**
 * _puts - function to print an array char by char
 * @str: for characters
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
