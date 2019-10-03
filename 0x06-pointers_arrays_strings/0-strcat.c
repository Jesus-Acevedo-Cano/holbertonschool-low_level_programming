#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - function that concatenates strings 
 * @dest: array elements
 * @src: array elements
 *
 * Return: is a void
 */

char *_strcat(char *dest, char *src)
{
int count;

count = 0;
while (src[count] != '\0')
{
dest = dest + src[count];
count++;
}
return (dest);
}
