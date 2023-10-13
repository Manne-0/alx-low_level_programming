#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: always 0
 */

void print_triangle(int size)
{
	int i;
	int j;
	int s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (s = 1; s < (size - i); s++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
