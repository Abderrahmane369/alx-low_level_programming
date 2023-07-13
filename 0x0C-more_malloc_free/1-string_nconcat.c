#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - aezae
 * @s1: eza
 * @s2: sdq
 * @n: ezaeza
 * Return: eza
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str1 = s1;
char *str2 = s2;
char *string;
unsigned int cn = n;

if (cn > strlen(str2))
cn = strlen(str2);

if (str1 == NULL)
str1 = "";

if (str2 == NULL)
str2 = "";

string = malloc(sizeof(char) * (strlen(str1) + cn + 1));

if (string == NULL)
return (NULL);

strcpy(string, str1);
strncat(string, str2, cn);

return (string);
}
