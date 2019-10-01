#include "holberton.h"

/**
 * swap_int - pointer to reset the value of a variable
 * @a: for first pointer
 * @b: for the second pointer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
