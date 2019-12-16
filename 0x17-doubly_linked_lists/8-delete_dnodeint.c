#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete the node at index
 * @head: pointer to head of list
 * @index: asked index
 * Return: list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *some, *fakehead = *head;
	unsigned int count;

	if (head && *head)
	{
		if (index == 0)
		{
			*head = fakehead->next;
			free(fakehead);
			return (1);
		}
		for (count = 0; count < index; count++)
		{
			some = fakehead;
			if (!some)
			{
				break;
			}
			fakehead = fakehead->next;
			if (index == count)
			{
				fakehead->next = some->next;
				some->next = NULL;
				free(some);
				return (1);
			}
		}
	}
	return (-1);
}
