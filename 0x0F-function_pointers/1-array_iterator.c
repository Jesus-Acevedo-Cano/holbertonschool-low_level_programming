#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function to iterate a function
 * @array: int array
 * @size: array size
 * @action: function to iterate
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (a = 0; a < size; a++)
	action(array[a]);
}
