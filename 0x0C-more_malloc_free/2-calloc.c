#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * _calloc - ezaea
 * @nmemb: eza
 * @size: zae
 * Return: ezae
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int k;

	if (nmemb * size == 0)
		return (NULL);

	s = malloc(size * nmemb);

	if (s == NULL)
		return (NULL);

	for (k = 0; k < nmemb; k++)
	{
		s[k] = 0;
	}

	return (s);
}
