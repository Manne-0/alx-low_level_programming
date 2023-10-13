#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{

	int n;

	for (n = 1; n < 101; n++)
	{
		int mul3 = n % 3;
		int mul5 = n % 5;
		int mul15 = n % 15;

		if (mul3 == 0)
		{
			printf("Fizz ");
		}
		else if (mul5 == 0)
		{
			printf("Buzz ");
		}
		else if (mul15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", n);
		}
	}
	printf("\n");
	return (0);
}
