#include "lists.h"

/**
 * sum_dlistint - function to sum all list nodes
 * @head: pointer to list
 *
 * Return: result
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
