#include "lists.h"

/**
 * free_listint2 - function free head list
 * @head: pointer to list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *some;

	if (head)
	{
		some = *head;
		*head = (*head)->next;
		free(some);
	}
	*head = NULL;
}
