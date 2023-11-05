#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value in he array
 * @max: maximun value in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int l;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max + min + 1;
	ptr = malloc(sizeof(int) * l);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}

