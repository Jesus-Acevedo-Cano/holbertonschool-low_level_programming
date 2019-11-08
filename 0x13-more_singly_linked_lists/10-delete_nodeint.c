#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete the node at index
 * @head: pointer to pointer
 * @index: asked index
 * Return: list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *some, *fakehead = *head;
	unsigned int count;

	if (head && *head)
	{
		if (index == 0)
		{
			*head = fakehead->next;
			free(fakehead);
			return (1);
		}
		for (count = 0; count < (index - 1); count++)
		{
			some = fakehead;
			if (!some)
			{
				break;
			}
			fakehead = fakehead->next;
			if (index == count)
			{
				fakehead = some->next;
				free(some);
				return (1);
			}
		}
	}
	return (-1);
}
