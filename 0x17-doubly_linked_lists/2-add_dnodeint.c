#include "lists.h"

/**
 * add_dnodeint - ndo
 * @head: eza
 * @n: eza
 * Return: eza
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head, *new;

	new = malloc(sizeof(dlistint_t));

	if (!n)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = h;

	if (h)
		h->prev = new;

	*head = new;

	return (new);
}
