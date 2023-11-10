#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second numbeer
 * Return: prodouct of two number
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two number
 * @a: first number
 * @b: second number
 * Return: division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of  the division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
