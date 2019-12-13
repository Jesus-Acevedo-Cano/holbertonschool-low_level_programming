#include "lists.h"

/**
 * free_dlistint - function free head list
 * @head: pointer to list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		/*free(head->prev);*/
		free(head);
	}
}
