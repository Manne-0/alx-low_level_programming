#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of command line argument
 * @argv: array containing the commandlin arguments
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
