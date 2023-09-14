#include "lists.h"

/**
 * add_dnodeint_end - endn
 * @head: headsho
 * @n: no
 * Return: turn
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *c = *head, *new;

    
    while (c)
    {
        if (!c->next)
            break;

        c = c->next;
    }

    new = malloc(sizeof(dlistint_t));

    new->n = n;
    new->next = NULL;
    new->prev = c;

    if (!c)
    {
        *head = new;
        return (new);
    }
        c->next = new;

    return (new);
}