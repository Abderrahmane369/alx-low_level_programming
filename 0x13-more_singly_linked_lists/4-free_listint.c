#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - eza
 * @head: eza
 */

void free_listint(listint_t *head)
{
	listint_t *c = head;

	if (!head)
		return;

	while (c)
	{
		free(c);

		c = c->next;
	}
}
