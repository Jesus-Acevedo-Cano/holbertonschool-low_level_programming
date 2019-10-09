#include "holberton.h"
/**
 * _print_rev_recursion - recursive function to print in reverse
 * @s: array elements
 *
 *
 * Return: a char
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
