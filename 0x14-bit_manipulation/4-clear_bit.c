#include "holberton.h"
/**
 * clear_bit - function to set the value of a bit to 0 in a given index
 * @n: unsigned long integer
 * @index: unsigned integer
 *
 * Return: value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~1 << index;

	return (1);
}
