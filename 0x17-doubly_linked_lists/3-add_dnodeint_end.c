#include "lists.h"
/**
 * add_dnodeint_end - function to add a new node at end
 * @head: Pointer to head of list
 * @n: node value
 * Return: list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;
	int i;

	if (head == NULL)
		return(NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	for (i = 0; tmp != NULL; i++)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new;
			new->prev = tmp;
		}
		tmp = tmp->next;
	}
	return (new);
}
