#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: number
 * @index: index of bit to be set
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	p = 1;
	p = p << index;
	*n = ((*n) | p);
	return (1);
}
