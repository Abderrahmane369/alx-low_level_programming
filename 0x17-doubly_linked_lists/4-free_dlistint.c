#include "lists.h"

/**
 * free_dlistint - l
 * @head: alo
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		head = head->next;

		free(head->prev);

		if (head->next == NULL)
			free(head), head = NULL;
	}
}
