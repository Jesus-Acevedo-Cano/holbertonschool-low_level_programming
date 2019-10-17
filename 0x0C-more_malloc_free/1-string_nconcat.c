#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that creates an array
 * @s1: string array
 * @s2: string array
 * @n: unsigned int
 *
 * Return: poiter
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int d, c, b, e;

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
	if (n >= d)
	{
		n = d;
	}
	a = malloc(sizeof(char) * (c + n + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= c; b++)
	{
		a[b] = s1[b];
	}
	for (e = 0; e <= n; e++)
	{
		a[c + e] = s2[e];
	}
	a[c + e] = '\0';
	return (a);
}
