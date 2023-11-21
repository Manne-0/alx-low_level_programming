#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints the element in a list
 * @h: first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node_cnt = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
