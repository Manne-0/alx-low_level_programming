#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum =  n % 10;

	if (lastnum > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastnum);
	}
	else if (lastnum < 6 && lastnum != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastnum);
	}
	else
	{
		printf("Last digit of %i is %i and is 0\n", n, lastnum);
	}
	return (0);
}
