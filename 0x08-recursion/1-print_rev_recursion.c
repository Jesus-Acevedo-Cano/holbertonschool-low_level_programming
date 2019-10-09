#include "holberton.h"
/**
 * print_rev_recursion - recursive function to print in reverse
 * @s: array elements
 *
 *
 * Return: a char
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
