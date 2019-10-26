#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function to print string arguments
 * @separator: constant char
 * @n: constant unsigned int
 *
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *res;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		res = va_arg(list, char *);
		if (res == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", res);
		}
		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");

}
