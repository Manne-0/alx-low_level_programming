#include "main.h"

/**
 * _isdigit - checks if the parameter is a digit
 * @c: This is the character to be checked
 * Return: 1 if the parameter is a digit, 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	{
		return (0);
	}
}
