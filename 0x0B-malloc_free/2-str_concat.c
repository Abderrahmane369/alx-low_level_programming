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
char *str1;
char *str2;

if (s1 == NULL)
str1 = "";

else
str1 = s1;

if (s2 == NULL)
str2 = "";

else
str2 = s2;

strcpy(strcc, str1);
strcat(strcc, str2);

strcc = malloc(strlen(str1) + strlen(str2) + 1);

if (strcc == NULL)
return (NULL);

return (strcc);
}
