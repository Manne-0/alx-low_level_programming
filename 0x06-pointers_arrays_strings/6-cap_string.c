#include "main.h"

/**
 * cap_string - capitalizes words of a string
 * @s: the string
 * Return: s
 */

char *cap_string(char *s)
{
	int stringlen = 0;
	char seperator[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};
	int seplen = 0;

	while (s[stringlen] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		for (seplen = 0; seplen < 13; seplen++)
		{
			if (s[stringlen] == seperator[seplen])
			{
				if (s[stringlen + 1] >= 'a' && s[stringlen + 1] <= 'z')
					s[stringlen + 1] = s[stringlen + 1] - 32;
			}
		}
		stringlen++;
	}
	return (s);
}
