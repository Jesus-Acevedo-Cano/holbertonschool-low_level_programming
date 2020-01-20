#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: the hash table you want to add or update the key/value
 *@key: the key
 *@value: value of the key
 *Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *temp;
	int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		newNode->next = NULL;
		ht->array[index] = newNode;
		return (1);
	}

	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
