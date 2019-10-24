#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - main function
 * @argc: argument cuantity
 * @argv: arguments array
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*d)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	d = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (d == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((d == op_div || d == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	c = (*d)(a, b);
	printf("%d\n", c);
	return(0);
}
