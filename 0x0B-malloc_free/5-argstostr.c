#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: string array
 * @av: string array
 *
 * Return: poiter
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int b, c, d, e;

	d = 0;
	e = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
		}
		e = e + c + 1;
	}
	a = malloc(sizeof(char) * e + 1);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			a[d] = av[b][c];
			d++;
		}
		a[d] = '\n';
		d++;
	}
	a[d] = '\0';
	return (a);

}
