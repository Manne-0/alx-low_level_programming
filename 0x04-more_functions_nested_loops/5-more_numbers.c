#include "main.h"

/**
 * more_numbers - prints number 0 to 14 ten times
 * Return: Always 0
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
