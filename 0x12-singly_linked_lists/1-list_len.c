#include "lists.h"

/**
 * list_len - function to print number of elements on a list
 * @h: pointer to list
 *
 * Return: printed nodes cant
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		count++;
		h = h->next;
	}
	return (count);
}
