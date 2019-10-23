#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function to search a integer
 * @array: int array
 * @size: array size
 * @cmp: function to iterate
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (a = 0; a < size; a++)
			if (cmp(array[a]) != 0)
				return (a);
	}
	return (-1);
}
