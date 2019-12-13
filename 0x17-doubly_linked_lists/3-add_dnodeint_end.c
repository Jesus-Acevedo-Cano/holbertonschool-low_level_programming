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
	int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	}
	for (i = 0; tmp != NULL; i++)
	{
		if (tmp->next == NULL)
		{
			new->n = n;
			tmp->next = new;
			new->next = NULL;
			new->prev = tmp;
			/*return (new);*/
		}

		tmp = tmp->next;
	}
	return (new);
}
