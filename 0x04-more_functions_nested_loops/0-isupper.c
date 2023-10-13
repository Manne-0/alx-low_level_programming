#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: The parameter to be checked
 * Return: 1 for an uppercase character(success) or 0
 * for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	{
		return (0);
	}
}
