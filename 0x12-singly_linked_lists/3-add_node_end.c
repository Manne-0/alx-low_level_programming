#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds anew node to the end of a linked list
 * @head: head of node
 * @str: string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	unsigned int length = 0;
	list_t *node_end = (list_t *)malloc(sizeof(list_t));
	list_t *current;

	if (node_end == NULL)
		return (NULL);
	node_end->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		length++;
	node_end->len = length;

	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node_end;

	return (node_end);
}
