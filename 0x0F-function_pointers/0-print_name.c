#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function pointer to a function that prints name
 * @name: name of the person
 * @f: pointer to a function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
