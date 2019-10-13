#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function, this time to print the number of arguments
 * @argc: arguments length
 * @argv: arguments array
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused))char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
