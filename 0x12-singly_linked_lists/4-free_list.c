#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - eza
 * @head: eza
 */

void free_list(list_t *head)
{
	list_t *h = head;

	while (h)
	{
		free(h->str);
		free(h);
		h = h->next;
	}
}
