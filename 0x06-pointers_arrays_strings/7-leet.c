#include "holberton.h"

/**
 **leet - function to change leters to numbers
 *@s: string array
 *
 *Return: uppercase string
 */
char *leet(char *s)
{
	char b[] = "ol2ea56t";
	int c, d;
		c = 0;
		while (s[c] != '\0')
		{
			d = 0;
			while (b[d] != '\0')
			{
				if (s[c] == b[d] || s[c] == b[d] - 32)
					s[c] = d + '0';
				d++;
			}
			c++;
		}
return (s);
_putchar('\n');
}
