#include <stdio.h>
/**
 * main - Entry point
 * while loop: iterate through 0 to 9
 * Return: Always 0 (success)
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(b + 48);
		b++;
	}
	putchar('\n');
	return (0);
}

