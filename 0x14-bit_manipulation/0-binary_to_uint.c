#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of binary
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	while (*b != '\0')
	{
		result <<= 1;
		if (*b == '1')
		{
			result |= 1;
		}
		else if (*b != '0' || b == NULL)
			return (0);

		b++;
	}
	return (result);
}
