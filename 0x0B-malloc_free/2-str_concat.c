#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to the newly allocated space for the concatenated
 * strings
 */

char *str_concat(char *s1, char *s2)
{
	int lens1 = 0;
	int lens2 = 0;
	int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		lens1++;
	for (i = 0; s2[i] != '\0'; i++)
		lens2++;

	ptr = malloc(sizeof(char) * (lens1 + lens2) + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		ptr[lens1 + i] = s2[i];
	return (ptr);
}
