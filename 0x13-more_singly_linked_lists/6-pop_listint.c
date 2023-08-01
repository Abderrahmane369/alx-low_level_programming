#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - eza
 * @head: eza
 * Return: eza
 */

int pop_listint(listint_t **head)
{
	listint_t *f = *head;
	int n;

	if (!f)
		return (0);

	n = f->n;

	*head = (*head)->next;

	free(f);

	return (n);
}
