#include "lists.h"

/**
 * print_dlistint - function to print data structure
 * @h: pointer to list
 *
 * Return: printed nodes cant
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
