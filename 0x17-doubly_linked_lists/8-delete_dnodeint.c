#include "lists.h"

/**
 * delete_dnodeint_at_index - lopy
 * @head: lop
 * @index: lol
 * Return: true
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c = *head;
	unsigned int _ = 0;

	while (c)
	{
		if (index == _)
		{
			if (c->prev)
				c->prev->next = c->next;
			else
				*head = c->next;

			if (c->next)
				c->next->prev = c->prev;

			free(c), c = NULL;

			return (1);
		}

		c = c->next;
		_++;
	}

	return (-1);
}
