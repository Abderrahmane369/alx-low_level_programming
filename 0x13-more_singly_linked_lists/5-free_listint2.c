#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - eza
 * @head: eza
 */

void free_listint2(listint_t **head)
{
	listint_t *h = *head;
	listint_t *t;

	while (h)
	{
		t = h;	
		h = h->next;
		free(t);
	}
}
