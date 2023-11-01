#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - contains a copy of strig
 * @str: string
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	cpy = (char *)malloc(sizeof(char) * (i + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		cpy[j] = str[j];
	}
	return (cpy);
}
