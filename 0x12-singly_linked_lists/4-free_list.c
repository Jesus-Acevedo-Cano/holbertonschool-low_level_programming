#include "lists.h"

/**
 * free_list - function free head list
 * @head: pointer to list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
		}
		free(head);
	}
}
