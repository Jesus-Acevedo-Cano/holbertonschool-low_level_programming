#include "variadic_functions.h"

/**
 * array_iterator - function to iterate a function
 * @array: int array
 * @size: array size
 * @action: function to iterate
 *
 * Return: Nothing.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	int res = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start (list, n);
	for (a = 0; a < n; a++)
	{
		res += va_arg (list, int);
	}
	va_end (list);
	return (res);

}
