#include <stdlib.h>
#include "lists.h"

/**
 * list_len - lenovo
 * @h: hhhh
 * Return: turne
 */

size_t list_len(const list_t *h)
{
	const list_t *j = h;

	size_t len = 0;

	while (j)
	{
		len++;
		j = j->next;
	}

	return (len);
}
