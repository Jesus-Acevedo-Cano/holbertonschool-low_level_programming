#include <stdio.h>
#include "holberton.h"
/**
 * _strncpy - function that copychar *_strncpy(char *dest, char *src, int n) strings
 * @dest: array elements
 * @src: array elements
 * @n: integer
 * Return: is a void
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return dest;
}
