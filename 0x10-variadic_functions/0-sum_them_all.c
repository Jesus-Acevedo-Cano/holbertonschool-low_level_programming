#include "variadic_functions.h"

/**
 * sum_them_all - function sum arguments
 * @n: unsigned int
 *
 *
 * Return: sum result
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
	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		res += va_arg(list, int);
	}
	va_end(list);
	return (res);

}
