#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a linked link
 * @head: linked list
 * @str: the string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	unsigned int length = 0;

	list_t *add_node = (list_t *) malloc(sizeof(list_t));

	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	add_node->len = length;
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
