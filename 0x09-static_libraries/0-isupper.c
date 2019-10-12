#include "holberton.h"
/**
 * _isupper - to print if uppercase 1 else 0
 * @c: for integers
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
