#include "search_algos.h"

/**
 * binary_search - function to do a binary search
 * @array: pointer to array's first pos
 * @size: size of the array
 * @value: value to search for
 * Return: index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t bottom = 0, middle, top = size - 1;

	if (array == NULL)
		return (-1);

	while (bottom <= top)
	{
		print_array(array, bottom, top);

		middle = ((top + bottom) / 2);

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			bottom = middle + 1;
		else if (array[middle] > value)
			top = middle - 1;
	}
	return (-1);
}

/**
 * print_array - function to print array
 * @array: pointer to array's first pos
 * @bottom: first element
 * @top: last element
 * Return: void
 */

void print_array(int *array, size_t bottom, size_t top)
{
	size_t count = 0;
	char *separator = "";

	printf("Searching in array: ");
	for (count = bottom; count <= top; count++)
	{
		printf("%s%d", separator, array[count]);
		separator = ", ";
	}
	printf("\n");
}
