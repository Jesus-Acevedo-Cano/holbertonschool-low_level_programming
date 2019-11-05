#include "lists.h"

/**
 * free_listint - function free head list
 * @head: pointer to list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
