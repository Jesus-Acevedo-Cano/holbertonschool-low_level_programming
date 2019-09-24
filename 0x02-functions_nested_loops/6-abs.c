#include "holberton.h"
/**
 * _abs - to print absolute value of a number
 * @c: for integers
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
if (c < 0)
{
return (c * -1);
}
else
{
return (c);
}
}
