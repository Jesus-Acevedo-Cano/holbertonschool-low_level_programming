#include "hash_tables.h"

/**
 *hash_table_get - return value of a key.
 *@ht: hash table
 *@key: key to search for.
 *Return: value of key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}
