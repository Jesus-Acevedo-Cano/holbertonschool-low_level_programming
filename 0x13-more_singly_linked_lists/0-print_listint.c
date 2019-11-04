#include "lists.h"

/**
 * print_list - function to print data structure
 * @h: pointer to list
 *
 * Return: printed nodes cant
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n != '\0')
		{
			printf("%d\n", h->n);
		}
		count++;
		h = h->next;
	}
	return (count);
}
