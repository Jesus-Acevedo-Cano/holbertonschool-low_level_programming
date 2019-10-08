#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: array elements
 * @accept: replace char
 *
 * Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
		{
			break;
		}
		else
		{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
			c++;
			}
		}
		}
	}
	return (c);
}
