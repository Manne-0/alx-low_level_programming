#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns number of elements
 * in a linked list
 *
 * @h: pointer to the head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
