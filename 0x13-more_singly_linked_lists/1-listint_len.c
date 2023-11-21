#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - print the number of elements in a linked list
 * @h: first node
 * Return: the number of elementa
 */
size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
