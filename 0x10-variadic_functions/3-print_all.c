#include "variadic_functions.h"
/**
 * str_check - Prints a string
 * @str: String to print
 * Return: Nothing
 */

char *str_check(char *str)
{
/*
 *	if (str == NULL)
 *		printf("(nil)");
 *	else
 *		printf("%s", str);
 */
	if (str == NULL)
		return ("(nil)");
	return (str);
}
/**
 * print_all - Sample Text
 * @format: Sample Text
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list in;
	char use;
	unsigned int i;

	va_start(in, format);
	i = 0;
	while (*(format + i) != '\0')
	{
		use = 0;
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(in, int));
			use++;
			break;
		case 'i':
			printf("%d", va_arg(in, int));
			use++;
			break;
		case 'f':
			printf("%f", va_arg(in, double));
			use++;
			break;
		case 's':
			printf("%s", str_check(va_arg(in, char*)));
			use++;
			break;
		}
		if (*(format + i + 1) != '\0' && use == 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
