#include "holberton.h"

/**
 * _strlen - function to print the lenght of an array
 * @s: for characters
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
