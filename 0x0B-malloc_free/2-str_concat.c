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
        char *cstr;
	char *str1 = "abc"
	char *str2 = "abc";

	if (s1 == NULL)
                str1 = "";
        else
                str1 = s1;

        if (s2 == NULL)
                str2 = "";
        else
                str2 = s2;

	cstr = malloc(strlen(s1) + strlen(s2) + 1);

        if (cstr == NULL)
                return (NULL);

        strcpy(cstr, s1);
        strcat(cstr, s2);

        if (s1 == NULL || s2 == NULL)
                return (NULL);

        strcc = malloc(strlen(s1) + strlen(s2) + 1);

        if (strcc == NULL)
                return (NULL);

        for (k = 0; k < strlen(s1) + strlen(s2); k++)
        {
           strcc[k] = cstr[k];
        }

        return (strcc);
}
