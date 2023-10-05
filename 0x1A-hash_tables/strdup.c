#include "hash_tables.h"

/**
 * strdup - dup str
 * @str: st
 * Return: sd
 */

char *strdup(const char *str)
{
	size_t length = strlen(str);
	char *duplicate;

	if (!str)
	{
		return (NULL);
	}

	duplicate = (char *)malloc(length + 1);

	if (!duplicate)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
