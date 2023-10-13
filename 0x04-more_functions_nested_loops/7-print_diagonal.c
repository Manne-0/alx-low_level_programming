#include "main.h"

/**
 * print_diagonal - prints a backward slash
 * @n: Number of times the slash is printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int d;
	int j;

	if (n <= 0)
		_putchar('\n');

	for (d = 0; d < n; d++)
	{
		for (j = 0; j < d; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
