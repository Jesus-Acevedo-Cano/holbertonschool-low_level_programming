#include "holberton.h"
/**
 * _isalpha - to print if alphabetic 1 else 0
 * @c: for integers
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
