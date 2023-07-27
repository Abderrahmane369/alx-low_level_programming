#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - lIESET
 * @h: hh
 * Return: rtur
 */

size_t print_list(const list_t *h)
{
	const list_t *j = h;
	size_t len = 0;

	while (j)
	{
		if (!j->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", j->len, j->str);
		}

		j = j->next;
		
		len++;
	}

	return (len);

}
