#include "lists.h"

/**
 * get_dnodeint_at_index - function to return the node at index
 * @head: pointer to list
 * @index: asked index
 * Return: index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}
	while (index > 0 && head != NULL)
	{
		head = head->next;
		index--;
	}
	return (head);
}
