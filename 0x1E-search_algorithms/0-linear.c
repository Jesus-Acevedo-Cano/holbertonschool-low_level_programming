#include "search_algos.h"

/**
 * linear_search - function to do a linear search
 * @array: pointer to array's first pos
 * @size: size of the array
 * @value: value to search for
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int count = 0;

	if (array == NULL)
		return (-1);
	while (count < size)
	{
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
		count++;
	}
	return (-1);
}
