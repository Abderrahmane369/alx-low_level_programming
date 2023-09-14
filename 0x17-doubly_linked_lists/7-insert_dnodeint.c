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

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 && !c)
	{
		new->next = NULL, new->prev = NULL, *h = new;
		return (new);
	}

	while (c)
	{
		if (idx == _)
		{
			if (!new)
				return (NULL);
			new->next = c, new->prev = c->prev;
			if (c->prev)
				c->prev->next = new;
			else
				*h = new;
			c->prev = new;
			return (new);
		}
		_++;
		if (!c->next)
			break;
		c = c->next;
	}
	if (idx == _)
	{
		new->prev = c, new->next = NULL, c->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
