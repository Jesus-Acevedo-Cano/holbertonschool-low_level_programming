#include "lists.h"

/**
 * pop_listint - function free the head of a list
 * @head: pointer to pointer
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *some;
	int a;

	if (*head)
	{
		some = (*head)->next;
		a = (*head)->n;
		free(*head);
		*head = some;
		return (a);
	}
	else
		return(0);
}
