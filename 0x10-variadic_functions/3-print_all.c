#include "variadic_functions.h"
/**
 * check - Prints a string
 * @str: String to print
 * Return: Nothing
 */

char *check(char *str)
{

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
	char *sep;
	unsigned int i;

	if (format != NULL)
	{
		va_start(in, format);
		i = 0;
		sep = "";
		while (*(format + i) != '\0')
		{
			switch (*(format + i))
			{
				case 'c':
					printf("%s", sep);
					sep = ", ";
					printf("%c", va_arg(in, int));
					break;
				case 'i':
					printf("%s", sep);
					sep = ", ";
					printf("%d", va_arg(in, int));
					break;
				case 'f':
					printf("%s", sep);
					sep = ", ";
					printf("%f", va_arg(in, double));
					break;
				case 's':
					printf("%s", sep);
					sep = ", ";
					printf("%s", check(va_arg(in, char*)));
					break;
			}
			i++;
		}
	}
	printf("\n");
}
