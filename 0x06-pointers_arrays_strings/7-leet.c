#include "main.h"

/**
 * leet - encodes a string
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int stringlen = 0;
	int leetlen;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	while (s[stringlen] != '\0')
	{
		for (leetlen = 0; leetlen < 10; leetlen++)
		{
			if (s[stringlen] == a[leetlen])
				s[stringlen] = b[leetlen];
		}
		stringlen++;
	}
	return (s);
}
