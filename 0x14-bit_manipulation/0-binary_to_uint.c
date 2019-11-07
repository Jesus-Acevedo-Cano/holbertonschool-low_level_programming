#include "holberton.h"
/**
 * binary_to_uint - function to convert a binary to decimal
 * @b: pointer to binary array
 *
 * Return: transform binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c, d, pot, res = 0;

	if (b == NULL)
		return (0);

	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
	}
	c--;
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] == '1')
		{
			pot = (unsigned int)_pow_recursion(2, c);
			res += pot;
		}
		c--;
	}
	return (res);
}

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
