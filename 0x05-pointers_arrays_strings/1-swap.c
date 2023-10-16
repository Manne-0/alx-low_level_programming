#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: First parameter
 * @b: Second parameter
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int old = *b;
	*b = *a;
	*a = old;
}
