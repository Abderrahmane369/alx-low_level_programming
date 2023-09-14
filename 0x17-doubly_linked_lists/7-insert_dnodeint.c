#include "lists.h"

/**
 * insert_dnodeint_at_index - its
 * @h: shot
 * @idx: sho
 * @n: notsh
 * Return: true
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *c = *h, *new;
	unsigned int _ = 0;

	while (c)
	{
		if (idx == _)
		{
			new = malloc(sizeof(dlistint_t));

			if (!new)
				return (NULL);

			new->n = n;
			new->next = c;
			new->prev = c->prev;

			c->prev->next = new;
			c->prev = new;

			return (new);
		}

		c = c->next;
		_++;
	}

	return (NULL);
}
