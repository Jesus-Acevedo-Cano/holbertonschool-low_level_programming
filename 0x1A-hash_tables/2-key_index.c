#include "hash_tables.h"

/**
 * key_index - Function to get the index of a key.
 * @key: key
 * @size: size of the array on the hash table.
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = hash_djb2(key) % size;
	return (index);
}
