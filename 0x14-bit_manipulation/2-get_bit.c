#include "holberton.h"
/**
 * get_bit - function to get the value of a bit in a given index
 * @n: unsigned long integer
 * @index: unsigned integer
 *
 * Return: value of bit in index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == '\0')
		return(-1);
	return (n >> index & 1);
}
