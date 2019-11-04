#include "lists.h"

/**
 * listint_len - function to print number of elements on a list
 * @h: pointer to list
 *
 * Return: printed nodes cant
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n != '\0')
			count++;
		h = h->next;
	}
	return (count);
}
