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
	int a = 0, b = 0, c = 0;

	while (needle[c])
		c++;
	if (needle == '\0')
		return ("");
	else if (c == 0)
		return (haystack);
	while (haystack[b])
	{
		if (needle[a] == haystack[b])
		{

			if (needle[a + 1] == '\0')
				return (&haystack[b - a]);
			a++;
		} else
			a = 0;
		b++;
	}
	return (0);
}
