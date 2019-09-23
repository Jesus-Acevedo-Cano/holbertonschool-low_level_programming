#include "holberton.h"
/*
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * comments are here for u betty
 *
 *
 */
int main(void)
{
char a[]="Holberton";
int b = 0;
 int c = sizeof(a);

for(; b <= c; b++)
_putchar(a[b]);
return (0);
}
