#include "hash_tables.h"
/**
 * hash_table_print - print values of hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *temp;
	char *separator = "";

	if (ht)
	{
		printf("{");

		for (index = 0; index < ht->size; index++)
		{
			temp = ht->array[index];

			while (temp)
			{
				printf("%s'%s': '%s'", separator, temp->key, temp->value);
				separator = ", ";
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
