#include "holberton.h"
/**
 * _pow_recursion - recursive function that prints string
 * @x: integer
 * @y: integer
 *
 * Return: a char
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
		}
		return (0);
}
