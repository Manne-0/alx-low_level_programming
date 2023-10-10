#include <stdio.h>
/**
 * _puchar: function that calls the standard putchar function
 * c: a variable that takes a character input
 * main - Entry Point
 * Return: always 0 (success)
 */
void _putchar(char c)
{
	putchar(c);
}
int main(void)
{
	_putchar('-');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
