#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - eaea
 * @str: aeeaea
 * Return: zaea
 */

char *_strdup(char *str)
{
	char *strv;
	unsigned int k;

	if (str == NULL)
		return (NULL);

	strv = malloc(sizeof((strlen(str) + 1) * sizeof(char)));

	if (strv == NULL)
		return (NULL);

	for (k = 0; k < strlen(str); k++)
	{
		strv[k] = str[k];
	}

	return (strv);
}
