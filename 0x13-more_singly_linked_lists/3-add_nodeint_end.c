#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: first node
 * @n: node data
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeint_end = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current;

	if (nodeint_end == NULL)
		return (NULL);
	nodeint_end->n = n;
	nodeint_end->next = NULL;

	if (*head == NULL)
	{
		*head = nodeint_end;
		return (nodeint_end);
	}
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = nodeint_end;
	return (nodeint_end);
}
