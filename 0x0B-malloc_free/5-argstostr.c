#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that duplicates an array
 * @ac: string array
 * @av: string array
 *
 * Return: poiter
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int d, c, b, e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (c = 0; s1[c] != '\0'; c++)
	{
	}
	for (d = 0; s2[d] != '\0'; d++)
	{
	}
	a = malloc(sizeof(char) * (c + d + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= c; b++)
	{
		a[b] = s1[b];
	}
	for (e = 0; e <= d; e++)
	{
		a[c + e] = s2[e];
	}
	return (a);
}
