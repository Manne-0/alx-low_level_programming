#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head of the list
 * @index: index of the node
 * Return: return mnode
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
