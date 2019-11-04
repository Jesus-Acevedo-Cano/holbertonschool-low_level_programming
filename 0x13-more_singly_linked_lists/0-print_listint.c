#include "lists.h"

/**
 * print_listint - function to print list of integers
 * @h: pointer to list
 *
 * Return: printed nodes cant
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
