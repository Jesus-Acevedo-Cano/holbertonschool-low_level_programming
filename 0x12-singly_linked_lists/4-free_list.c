#include "lists.h"

/**
 * print_list - function to print data structure
 * @h: pointer to list
 *
 * Return: printed nodes cant
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head != NULL)
		{
			free(head);
		}
		count++;
		head = head->next;
	}
}
