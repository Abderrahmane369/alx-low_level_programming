#include "lists.h"

/**
 * get_dnodeint_at_index - index
 * @head: leha
 * @index: xedi
 * Return: l PLUS l equal 
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c = head;
	unsigned int _ = 0;

	while (c)
	{
		if (_ == index)
			return (c);

		c = c->next;
		_++;
	}

	return (NULL);
}
