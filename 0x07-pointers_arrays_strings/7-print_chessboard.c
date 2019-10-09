#include "holberton.h"
/**
 * print_chessboard - function that print chessboard
 * @a: pointer to array elements
 *
 *
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
