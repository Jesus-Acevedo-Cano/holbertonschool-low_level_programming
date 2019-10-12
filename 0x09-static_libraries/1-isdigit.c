#include "holberton.h"
/**
 * _isdigit - to print if digit 1 else 0
 * @c: for integers
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
