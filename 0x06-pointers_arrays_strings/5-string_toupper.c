#include "holberton.h"

/**
 *string_toupper - function to change lowercase to uppercase
 *@a: string array
 *
 *Return: uppercase string
 */
char *string_toupper(char *a)
{
int b;

for (b = 0; a[b] != '\0'; b++)
{
	if (a[b] >= 'a' && a[b] <= 'z')
	a[b] = a[b] - 32;
}
return (a);
}
