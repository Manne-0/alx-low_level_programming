#include <stdio.h>
/**
 * main - Entry poin
 *
 * Return: always0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num < 9)
		{
			putchar(num + 48);
                        putchar(44);
                        putchar(32);
		}
		else
		{
			putchar(num + 48);
		}
		num++;
	}
	return (0);
}
