#include "lists.h"

/**
 * get_nodeint_at_index - function to return the node at index
 * @head: pointer to list
 * @index: asked index
 * Return: index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index > 0)
	{
		head = head->next;
		index--;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	else
	return (head);
}
