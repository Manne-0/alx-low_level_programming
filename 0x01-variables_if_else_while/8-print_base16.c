#include <stdio.h>
/**
 * main - Entry point
 * while loop: iterate through the digits in base16
 * Return: always 0 (success)
 */
int main(void)
{
	int b16 = 0;

	while (b16 < 10)
	{
		putchar(b16 + 48);
		b16++;
	}
	while (b16 >= 10 && b16 < 16)
	{
		putchar(b16 + 'a' - 10);
		b16++;
	}
	putchar('\n');
	return (0);
}

