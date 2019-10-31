#include "lists.h"

/**
 * print_list - function to print data structure
 * @h: pointer to list
 *
 * Return: printed nodes cant
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[o] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
