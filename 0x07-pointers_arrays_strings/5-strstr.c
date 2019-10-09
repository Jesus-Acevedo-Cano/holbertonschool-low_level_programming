#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: array elements
 * @needle: array elements to compare
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	if (haystack != '\0')
	{
	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			return (haystack + a);
		}
	}
	}
	else
	{
		return ('\0');
	}
	return (0);
}
