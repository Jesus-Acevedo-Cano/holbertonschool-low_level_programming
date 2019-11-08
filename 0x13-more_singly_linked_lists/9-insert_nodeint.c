#include "lists.h"

/**
 * insert_nodeint_at_index - function to add the node at index
 * @head: pointer to pointer
 * @idx: asked index
 * @n: integer
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *some, *fakehead = *head;
	unsigned int count;

	some = malloc(sizeof(listint_t));
	if (some == NULL)
	{
		return (NULL);
	}
	if (head)
	{
		if (idx == 0 || *head == NULL)
		{
			some->next = fakehead;
			some->n = n;
			*head = some;
			return (some);
		}
		for (count = 0; count < (idx - 1); count++)
		{
			fakehead = fakehead->next;
			if (fakehead == NULL)
			{
				free(some);
				return (NULL);
			}
		}
		some->n = n;
		some->next = fakehead->next;
		fakehead->next = some;
		return (some);
	}

	return (NULL);
}
