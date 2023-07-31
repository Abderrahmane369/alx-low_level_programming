#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - eza
 * @head: eza
 */

void free_listint(listint_t *head)
{
	listint_ *c = head;

	while (c)
	{
		free(c);

		c = c->next;
	}
}
