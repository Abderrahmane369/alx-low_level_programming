#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - eza
 * @head: eza
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
head = head->next;
temp = head;
free(temp);
}
}
