#include "holberton.h"

/**
 * is_palindrome - function to compare a palindrome
 * @s: string
 *
 * Return: int
 *
 */
int is_palindrome(char *s)
{
	int b = aux_1(s);
	if (b <= 1)
		return (1);
	return (aux_2(s, b));
}

/**
 * aux_1 - Set pointer on string end
 * @a: Pointer
 * Return: integer
 */
int aux_1(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}
	a++;
	return (1 + aux_1(a));
}

/**
 * aux_2 - Compare
 * @s: String
 * @b: Size of the string
 * Return: integer
 */
int aux_2(char *s, int b)
{
	if (b <= 1)
		return (1);
	else if (*s == *(s + b - 1))
	{
		return (aux_2(s + 1, b - 2));
	}
	return (0);
}
