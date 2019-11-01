#include "lists.h"
/**
 * add_node_end - function to add a new node
 * @head: Pointer to pointer
 * @str: Poiter to a string
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *current;
	unsigned int count;

	current = *head;
	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
	}
	list->str = strdup(str);
	list->len = count;
	list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}
	while (1)
	{
		if (current->next == NULL)
		{
			current->next = list;
			break;
		}
		else
		{
			current = current->next;
		}
	}

	return (*head);
}
