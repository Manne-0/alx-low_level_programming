#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set
 * of a byte
 *
 * @s: String to be searched in
 * @accept: string to be searched for
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
