#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - elolpololkfea
 * @h: zea
 * Return: ezaea
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *c = h;

	size_t l = 0;

	while (c)
	{
		printf("%d\n", c->n);

		l++;
		c = c->next;
	}

	return (l);
}
