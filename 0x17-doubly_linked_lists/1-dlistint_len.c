#include "lists.h"

/**
 * dlistint_len - a function
 * @h: o
 * Return: fum
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *c = h;

	size_t l = 0;

	while (c)
	{
		c = c->next;
		l++;
	}

	return (l);
}
