#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function, this time to print the adition of given arguments
 * @argc: arguments length
 * @argv: arguments array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int res = 0;
int a;
int b;

if (argc < 2)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] < 48 || argv[a][b] > 57)
{
printf("Error\n");
return (1);
}
}
res = res + atoi(argv[a]);
}
printf("%d\n", res);
return (0);
}
