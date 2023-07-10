#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * char *_strdup(char *str) - eaea
 * @str: aeeaea
 * Return: zaea
 */

char *_strdup(char *str)
{
	char *strv;

	if (str == NULL)
		return (NULL);

	strv = malloc(sizeof((strlen(str) + 1) * sizeof(char)));

	if (strv == NULL)
		return (NULL);

	strv = str;

	return (strv);
}
