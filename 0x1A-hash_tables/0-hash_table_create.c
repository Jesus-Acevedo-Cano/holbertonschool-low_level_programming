#include "hash_tables.h"

/**
 *hash_table_create - Create a new hash table.
 *@size: size of hash table.
 *Return: pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash;

	newHash = malloc(sizeof(hash_table_t));
	if (newHash == NULL)
		return (NULL);

	newHash->size = size;
	newHash->array = malloc(sizeof(hash_node_t *) * size);

	if (newHash->array == NULL)
	{
		free(newHash);
		return (NULL);
	}

	return (newHash);
}
