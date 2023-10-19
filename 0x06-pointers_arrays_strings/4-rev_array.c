#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: pointer to array
 * @n: number of element of an array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int swap;
	int i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		swap = a[i];
		a[i++] = a[n];
		a[n--] = swap;
	}
}
