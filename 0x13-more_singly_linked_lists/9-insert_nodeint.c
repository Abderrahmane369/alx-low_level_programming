#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - ezaaez
 * @head: eza
 * @idx: eza
 * @n: eza
 * Return: eza
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *c = *head;
unsigned int cI = 0;

if (!head)
return (NULL);

if (idx == 0)
{
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = c;
*head = new;
return (new);
}

while (c)
{
if (cI == idx - 1)
{
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = c->next;
c->next = new;
return (new);
}

c = c->next;
cI++;
}

return (NULL);
}
