#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_bi_recurse - prints binary representation of a number
 * @n: number to be converted
 */
void print_bi_recurse(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi_recurse(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - print binary rep of a number
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi_recurse(n);
	}
}
