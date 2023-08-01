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

	int n = f->n;

	*head = (*head)->next;

	free(f);

	return (n);
}
