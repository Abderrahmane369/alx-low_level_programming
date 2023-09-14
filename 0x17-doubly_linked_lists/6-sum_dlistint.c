#include "lists.h"

/**
 * sum_dlistint - lol
 * @head: lol
 * Return: lol
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c = head;
	int sum = 0;

	while (c)
	{
		sum += c->n;
		c = c->next;
	}

	return (sum);
}
