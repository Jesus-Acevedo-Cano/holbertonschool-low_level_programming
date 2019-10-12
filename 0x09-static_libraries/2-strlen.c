#include "holberton.h"

/**
 * _strlen - function to print the lenght of an array
 * @s: for characters
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int count = 0;
while (*s != 0)
{
s++;
count++;
}
return (count);
}
