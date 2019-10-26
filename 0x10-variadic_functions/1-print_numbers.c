#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function to print arguments
 * @separator: constant char
 * @n: unsigned int
 *
 *
 * Return: sum result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	int res;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		res = va_arg(list, int);
		printf("%d", res);
		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");

}
