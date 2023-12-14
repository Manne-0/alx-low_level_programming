#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	int x = 1;
	int lil_or_big;

	lil_or_big = (int) (((char *)&x)[0]);

	return (lil_or_big);
}
