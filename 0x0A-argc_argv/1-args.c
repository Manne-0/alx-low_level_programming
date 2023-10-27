#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of command line argument
 * @argv: array containig the program comman line
 * arguments
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
