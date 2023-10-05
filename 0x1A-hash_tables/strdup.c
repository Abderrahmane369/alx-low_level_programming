#include "hash_tables.h"

/**
 * strdup - dup str
 * @str: st
 * Return: sd
 */

char *strdup(const char *str)
{
	size_t length = strlen(str);
	char *duplicate = (char *)malloc(length + 1);

	if (str)
	{
		return (NULL);
	}

	if (duplicate)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
