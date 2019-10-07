#include "holberton.h"
/**
 * _memcpy - function that replace a character in the array
 * @dest: array elements
 * @src: replace char
 * @n: unsigned integer
 * Return: a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
