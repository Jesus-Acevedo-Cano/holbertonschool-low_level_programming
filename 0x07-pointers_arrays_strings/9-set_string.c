#include "holberton.h"
/**
 * set_string - function that changes value of a pointer to char
 * @s: array elements
 * @to: replace char
 *
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
