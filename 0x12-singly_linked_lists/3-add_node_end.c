#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - loo
 * @head: eaze
 * @str: ezae
 * Return: loo
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l = *head;

	list_t *n = malloc(sizeof(list_t));

	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;

	while (l && l->next)
	{
		l = l->next;
	}

	if (l)
		l->next = n;
	else
		*head = n;

	return (n);
}
