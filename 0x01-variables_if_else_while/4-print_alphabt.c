#include <stdio.h>
/**
 * main - entry point
 * while loop: iteratethrough a to z
 * Return: always 0 (success)
 */
int main(void)
{
	char bets = 'a';

	while (bets <= 'z')
	{
		if (bets != 'q' && bets != 'e')
		{
			putchar(bets);
		}
		bets++;
	}
	putchar('\n');
	return (0);
}
