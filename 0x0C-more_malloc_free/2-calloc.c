#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _calloc - ezaea
 * @nmemb: eza
 * @size: zae
 * Return: ezae
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb * size == 0)
		return (NULL);

	s = malloc(size * nmemb);

	if (s == NULL)
		return (NULL);

	memset(s, 0, nmemb * size);

	return (s);
}
