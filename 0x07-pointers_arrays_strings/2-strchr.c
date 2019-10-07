#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - function that replace a character in the array
 * @s: array elements
 * @c: replace char
 *
 * Return: a char
 */
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
if (s[i] == '\0')
return (NULL);
}
return (0);
}
