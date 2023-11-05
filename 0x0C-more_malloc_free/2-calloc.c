#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates mem for an array using malloc
 * @nmemb: number of array
 * @size: size of array
 *
 * Return: pointer to newly allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
