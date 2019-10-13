#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function, this time to print the name of the arguments
 * @argc: arguments length
 * @argv: arguments array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
