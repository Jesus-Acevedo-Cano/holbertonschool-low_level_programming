#include "holberton.h"
/**
 * _memset - function that replace a character in the array
 * @s: array elements
 * @b: replace char
 * @n: unsigned integer
 * Return: a char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
