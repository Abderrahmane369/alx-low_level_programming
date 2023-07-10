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
	int k;

	if (str == NULL)
		return (NULL);

	strv = malloc(sizeof((strlen(str)) * sizeof(char)));

	if (strv == NULL)
		return (NULL);

	for (k = 0; k < strlen(str); k++)
	{
		strv[k] = str[0];
	}

	return (strv);
}
