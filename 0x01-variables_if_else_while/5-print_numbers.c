#include <stdio.h>
/**
 * main - entry point
 * while loop: iterate through 0 to 9
 * Return: always 0 (success)
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		printf("%i", b);
		b++;
	}
	printf("\n");
	return (0);
}
