#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: new node
 * @n: number of node
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnode = (listint_t *)malloc(sizeof(listint_t));

	if (addnode == NULL)
		return (NULL);

	addnode->n = n;
	addnode->next = *head;
	*head = addnode;

	return (addnode);
}
