#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *tmp = head;
	list_t *next;

	while (tmp != NULL)
	{
		next = tmp->next;

		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
