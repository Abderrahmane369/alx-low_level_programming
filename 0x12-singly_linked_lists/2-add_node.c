#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - nodee
 * @head: ooo
 * @str: eza
 * Return: lol
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h = *head;

	list_t *n = malloc(sizeof(list_t));

	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = h;

	*head = n;

	return (n);
}
