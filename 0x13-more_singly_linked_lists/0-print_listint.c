#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint - AAAoAOU
 * @h: ooooo
 * Return: opopo
 */

size_t print_listint(const listint_t *h)
{
	listint_t *c = h;
	
	size_t k = 0;

	while (c)
	{
		printf("%d", c->n);
		c = c->next;

		k++;
	}

	return (k);
}
