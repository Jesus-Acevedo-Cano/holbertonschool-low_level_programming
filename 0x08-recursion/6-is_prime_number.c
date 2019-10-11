#include "holberton.h"
/**
 * prime_aux - auxiliar function
 * @n: integers
 * @a: integer count
 *
 * Return: integer
 */
int prime_aux(int n, int a)
{
	if (n == a)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	return (prime_aux(n, a + 1));
}

/**
 * is_prime_number - recursive function to knows if a number is prime
 * @n: integers
 *
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_aux(n, 2));
}
