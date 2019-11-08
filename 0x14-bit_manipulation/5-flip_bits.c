#include "holberton.h"

/**
 * flip_bits - function to get the number of fliped bits
 * @n: unsigned long integer
 * @m: unsigned integer
 *
 * Return: value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int b = 0;

	a = m ^ n;
	while (a)
	{
		b += a & 1;
		a >>= 1;
	}
	return (b);
}
