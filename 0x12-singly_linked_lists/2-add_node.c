#include "lists.h"
/**
 * add_node - function to add a new node
 * @head: Pointer to pointer
 * @str: pointer to a string
 * Return: list items
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	unsigned int count;

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
	list->next = *head;
	*head = list;

	return (list);
}
