#include "lists.h"

/**
 * sum_listint - function to sum all list nodes
 * @head: pointer to list
 *
 * Return: result
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
