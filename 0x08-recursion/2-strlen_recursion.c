#include "holberton.h"
/**
 * _strlen_recursion - recursive function to print in reverse
 * @s: array elements
 *
 *
 * Return: a char
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (_strlen_recursion(s + 1) + 1);
}
else
{
return (0);
}
}
