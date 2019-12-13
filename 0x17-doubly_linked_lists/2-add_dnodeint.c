#include "lists.h"

/**
 * add_dnodeint - function to add a new node
 * @head: Pointer to pointer
 * @n: node value
 * Return: list items
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);

}
