#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - ezaold
 * @head: zea
 * @n: eza
 * Return: iezap
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	return (new);
}
