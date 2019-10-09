#include "holberton.h"
/**
 * _puts_recursion - recursive function that prints string
 * @s: array elements
 *
 *
 * Return: a char
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
	_putchar(*s);
       	_puts_recursion(s + 1);
	}
}
