#include "holberton.h"

/**
 *rot13 - function to change leters 13 positions
 *@s: string array
 *
 *Return: uppercase string
 */
char *rot13(char *s)
{
	int a = 0, b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[a] != '\0')
	{
		for (b = 0; c[b] != '\0'; b++)
			if (s[a] == c[b])
			{
				s[a] = d[b];
				break;
			}
		a++;
	}

	return (s);
}
