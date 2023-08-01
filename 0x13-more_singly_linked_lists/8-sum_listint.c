#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - aze
 * @head: eza
 * Return: eza
 */

int sum_listint(listint_t *head)
{
	listint_t *c = head;

	int sum = 0;

	while (c)
	{
		sum += c->n;

		c = c->next;
	}

	return (sum);
}
