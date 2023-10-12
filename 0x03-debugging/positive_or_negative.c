#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * if ...else: Conditionals to check if the number is positive or negative
 *
 * Return: Always 0 (success)
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else
	{
		printf("%i is negative\n", i);
	}
	return;
}
