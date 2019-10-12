#include <stdio.h>
#include "holberton.h"
/**
 * _strncat - function that concatenates strings
 * @dest: array elements
 * @src: array elements
 * @n: integer
 * Return: is a void
 */

char *_strncat(char *dest, char *src, int n)
{
int len = 0, count = 0;

while (dest[len] != '\0')
len++;
while (count < n && src[count] != '\0')
{
dest[len + count] = src[count];
count++;
}
return (dest);
}
