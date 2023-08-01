#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - ezaaez
 * @head: eza
 * @idx: eza
 * @n: eza
 * Return: eza
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c;
	unsigned int cIndex = 0;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	c = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	while (c)
	{
		if (idx == 0)
		{
			new->next = c;
			*head = new;
			return (new);
		}
		else if (cIndex == idx - 1)
		{
			new->next = c->next;
			c->next = new;
			return (new);
		}
		c = c->next;
		cIndex++;
	}

	free(new);
	return (NULL);
}
