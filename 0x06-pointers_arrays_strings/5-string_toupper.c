#include "main.h"

/**
 * string_toupper - changers lowercases letters of a string
 * to uppercase
 * @s: pointer to string
 * Return: 0
 */

char *string_toupper(char *s)
{
	int stringlen = 0;

	while (s[stringlen] != '\0')
	{
		if (s[stringlen] >= 97 && s[stringlen] <= 122)
		{
			s[stringlen] = s[stringlen] - 32;
		}
		stringlen++;
	}
	return (s);
}
