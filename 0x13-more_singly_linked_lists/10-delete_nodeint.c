#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - eza
 * @head: eza
 * @index: e za
 * Return: zea
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *d, *c = *head;
	unsigned int ci = 0;

	if (!head)
		return (-1);

	while (c)
	{
		if (ci == index - 1)
		{
			d = c->next;
			c->next = c->next->next;
			free(d);
			return (1);
		}
		else if (index == 0)
		{
			*head = (*head)->next;
			free(c);
			return (1);
		}
		c = c->next;
		ci++;
	}

	return (-1);
}
