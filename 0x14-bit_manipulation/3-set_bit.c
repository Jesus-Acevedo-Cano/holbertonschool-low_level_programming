#include "holberton.h"
/**
 * set_bit - function to set the value of a bit to 1 in a given index
 * @n: unsigned long integer
 * @index: unsigned integer
 *
 * Return: value of bit in index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int fake = 1;

	if (index > 63)
		return (-1);

	fake = fake << index;
	*n = fake + *n;

	return (1);
}
