#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched in
 * @needle: substring to be searched for
 * Return: Pointer to the beggining of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}

