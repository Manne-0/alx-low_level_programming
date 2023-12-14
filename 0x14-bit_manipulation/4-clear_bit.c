#include "main.h"

/**
 * clear_bit - set vallue of bit to 0
 * @n: number
 * @index: index of bit to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	p = 1;
	p = p << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = p ^ *n;
	return (1);
}
