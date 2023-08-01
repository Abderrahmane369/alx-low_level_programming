#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - ezaaez
 * @head: eza
 * @idx: eza
 * @n: eza
 * Return: eza
 */

#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current = *head;
unsigned int current_idx = 0;

if (!head)
return (NULL);

if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (current)
{
if (current_idx == idx - 1)
{
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = current->next;
current->next = new_node;
return (new_node);
}

current = current->next;
current_idx++;
}

return (NULL);
}

