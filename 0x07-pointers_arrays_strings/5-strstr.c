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
	while (*haystack != '\0')
	{
		char *n = needle;

		while (*haystack == *n && *n != '\0')
		{
			haystack++;
			n++;
		}
		haystack++;
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}

