#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: head node
 * Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int head_data;

	if (*head == NULL)
		return (0);
	head_data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (head_data);
}
