#include "holberton.h"

/**
 * rev_string - function to ereverse an array
 * @s: for characters
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
int count0 = 0;
int count1 = 0;
char a, b;
while (s[count0] != '\0')
{
count0++;
}
count0--;
for (count1 = 0; count1 < count0; count1++)
{
a = s[count0];
b = s[count1];

s[count0] = b;
s[count1] = a;
count0--;
}
}
