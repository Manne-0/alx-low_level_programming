#include "main.h"
#include <stdio.h>

/**
 * print_array - print the elements of an array
 * @a: the array
 * @n: number of elements to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
