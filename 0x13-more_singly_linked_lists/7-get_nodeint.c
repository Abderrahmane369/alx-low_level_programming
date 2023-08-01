#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - eza
 * @head: eza
 * @index: eza
 * Return: eaz
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n = head;
	unsigned int cI = 0;

	while (n)
	{
		if (cI == index)
			break;
		else
		{
			n = n->next;
			cI++;
		}
	}

	return (n);
}
