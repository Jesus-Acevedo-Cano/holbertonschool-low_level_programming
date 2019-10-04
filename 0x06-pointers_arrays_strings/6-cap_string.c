#include "holberton.h"
/**
 * cap_string - uppercase for capital letters
 * @a: string array
 *
 *
 * Return: string
 */
char *cap_string(char *a)
{
int b;
b = 0;
if (a[0] >= 'a' && a[0] <= 'z')
{
	a[0] = a[0] - 32;
}
for (b = 0; a[b] != '\0'; b++)
{
	switch (a[b])
	{
	case ',':
	case ';':
	case '.':
	case '(':
	case ')':
	case '{':
	case '}':
	case '!':
	case '?':
	case '"':
	case ' ':
	case '\n':
	case '\t':
		if (a[b + 1] > 96 && a[b + 1] < 123)
		{
			a[b + 1] = a[b + 1] - 32;
		}
	}
}
return (a);
}
