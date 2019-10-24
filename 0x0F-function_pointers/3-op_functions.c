#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - operator function
 * @a: int
 * @b: int
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operator function
 * @a: int
 * @b: int
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operator function
 * @a: int
 * @b: int
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - operator function
 * @a: int
 * @b: int
 *
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - operator function
 * @a: int
 * @b: int
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
