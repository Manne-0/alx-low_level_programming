#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int length = 0;
	int n;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	n = (length - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
