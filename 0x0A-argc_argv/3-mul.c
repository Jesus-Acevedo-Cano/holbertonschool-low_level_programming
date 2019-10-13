#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function, this time to print the name of the file
 * @argc: arguments length
 * @argv: arguments array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
return (0);
}
