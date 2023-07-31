#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - lololpp
 * @h: oeo
 * Return: zea
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	const listint_t *c =h;

	while (c)
	{
		c = c->next;
		len++;
	}

	return (len);
}
