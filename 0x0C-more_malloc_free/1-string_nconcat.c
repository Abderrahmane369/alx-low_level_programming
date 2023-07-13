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
int cn = n;
unsigned int k;

if (str1 == NULL)
str1 = "";

if (str2 == NULL)
str2 = "";

if (cn >= strlen(str2))
cn = strlen(str2);

string = malloc(sizeof(char) * strlen(str1) + sizeof(char) * cn + 1);

if (string == NULL)
return (NULL);

strcpy(string, str1);

for (k = 0; k < n; k++)
{
string[strlen(string)] = str2[k];
string[strlen(string) + 1] = '\0';
}

return (string);
}
