#include "lists.h"

/**
 * insert_nodeint_at_index - function to add the node at index
 * @h: pointer to header
 * @idx: asked index
 * @n: integer
 * Return: list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *some, *fakehead = *h;
	unsigned int count;

	some = malloc(sizeof(dlistint_t));
	if (some == NULL)
		return (NULL);

	if (h)
	{
		if (idx == 0 || *h == NULL)
		{
			some->next = fakehead;
			some->n = n;
			some->prev = NULL;
			*h = some;
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
