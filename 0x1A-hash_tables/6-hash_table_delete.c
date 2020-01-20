#include "hash_tables.h"

/**
 * hash_table_delete - delete  hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *pos, *temp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];

		while (temp)
		{
			pos = temp;
			free(temp->key);
			free(temp->value);
			temp = temp->next;
			free(pos);
		}
	}
	free(ht->array);
	free(ht);
}
