#include "holberton.h"
/**
 * print_alphabet - to print alphabet
 * @void: no argument
 *
 * Return: Always 0 (Success)
 *
 *
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
