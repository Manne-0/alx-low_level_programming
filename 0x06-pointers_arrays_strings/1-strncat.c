#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string destination
 * @src: string source
 * @n: number of string
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = *src;
		src++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
