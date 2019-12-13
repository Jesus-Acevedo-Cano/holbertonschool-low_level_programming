#include "lists.h"

/**
 * list_len - function to print number of elements on a list
 * @h: pointer to list
 *
 * Return: printed nodes cant
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	for(n = 0; h != NULL; n++)
	{
		h = h->next;
	}
	return(n);
}
