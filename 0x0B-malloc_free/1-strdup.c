#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that duplicates an array
 * @str: string array
 *
 * Return: poiter
 */

char *_strdup(char *str)
{
	char *a;
	int b, c;

	if (str == NULL)
		return (NULL);
	for (b = 0; str[b] != '\0'; b++)
	{
	}
	a = malloc(sizeof(char) * (b + 1));
	if (a == NULL)
		return (NULL);
	for (c = 0; c <= b; c++)
	{
		a[c] = str[c];
	}
	return (a);
}
