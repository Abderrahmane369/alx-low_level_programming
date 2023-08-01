#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - eza
 * @head: eza
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}

	*head = NULL;
}
