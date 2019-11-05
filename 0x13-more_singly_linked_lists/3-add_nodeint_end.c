#include "lists.h"
/**
 * add_nodeint_end - function to add a new node
 * @head: Pointer to pointer
 * @n: constant int
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *current;

	current = *head;
	list = malloc(sizeof(listint_t));
	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}
	while (1)
	{
		if (current->next == NULL)
		{
			current->next = list;
			break;
		}
		else
		{
			current = current->next;
		}
	}
	return (*head);
}
