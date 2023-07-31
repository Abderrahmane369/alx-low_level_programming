#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - eza
 * @head: eza
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	while (c)
	{
		free(head);

		head = head->next;
	}
}
