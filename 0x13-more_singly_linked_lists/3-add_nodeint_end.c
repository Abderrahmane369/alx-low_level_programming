#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end -eaz
 * @head: zea
 * @n: eaz
 * Return: eaz
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c = *head;

	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	while (c && c->next)
	{
		c = c->next;
	}
	
	if (*head)
		c->next = new;
	else
		*head = new;

	new->next = NULL;

	return (new);
}	
