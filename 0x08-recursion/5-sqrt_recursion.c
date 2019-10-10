#include "holberton.h"
/**
 * _aux - recursive function to print square root
 * @n: integers
 * @a: integer count
 *
 * Return: integer
 */
int _aux(int n, int a)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n < a * a)
	{
		return (-1);
	}
	if (n == a * a)
	{
		return (a);
	}
	return (_aux(n, a + 1));
}

/**
 * _sqrt_recursion - recursive function to print square root
 * @n: integers
 *
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_aux(n, 1));
}
