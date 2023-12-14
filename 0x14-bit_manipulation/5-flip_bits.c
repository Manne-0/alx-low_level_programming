#include "main.h"

/**
 * flip_bits -flips bit
 * @n: first number
 * @m: second number
 * Return: flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped;
	unsigned long int count;

	flipped = n ^ m;
	for (count = 0; flipped > 0;)
	{
		if ((flipped & 1) == 1)
			count++;
		flipped = flipped >> 1;
	}
	return (count);
}
