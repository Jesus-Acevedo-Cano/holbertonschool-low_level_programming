#include "lists.h"
/**
 * add_nodeint - function to add a new integer node
 * @head: Pointer to pointer
 * @n: constant integer
 * Return: list items
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
		return (NULL);
	list->n = n;
	list->next = *head;
	*head = list;

	return (list);
}
