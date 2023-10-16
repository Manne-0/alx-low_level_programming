#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: pointer to the string
 * Return: Reversed string
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = c;
	}
}
