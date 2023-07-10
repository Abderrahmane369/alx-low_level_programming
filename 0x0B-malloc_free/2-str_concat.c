#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * str_concat - ea
 * @s1: o
 * @s2: op
 * Return: sdaez
 */

char *str_concat(char *s1, char *s2)
{
	char *strcc;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	strcc = malloc(strlen(s1) + strlen(s2) + 2);

	if (strcc == NULL)
		return (NULL);

	strcpy(strcc, strcat(s1, s2));

	return (strcc);
}
