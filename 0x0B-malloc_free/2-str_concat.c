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
	unsigned int k;
	char *strcc;
	char *cpstr = strcat(s1, s2);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	strcc = malloc(strlen(cpstr) + 1);

	if (strcc == NULL)
		return (NULL);

	for (k = 0; k < strlen(cpstr); k++)
	{
		strcc[k] = cpstr[k];
	}

	return (strcc);
}
