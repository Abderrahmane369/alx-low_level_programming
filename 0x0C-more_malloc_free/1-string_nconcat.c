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
char *str1 = s1 == NULL? "": s1;
char *str2 = s2 == NULL? "": s2;
char *string;
size_t cn = n;
size_t len;
unsigned int k;

if (cn > strlen(str2))
   cn = strlen(str2);

string = malloc(sizeof(char) * (strlen(str1) + cn + 1));

if (string == NULL)
return (NULL);

memcpy(string, str1, strlen(str1));
memcpy(string + strlen(str1), str2, cn);
string[strlen(str1) + cn] = '\0';

return (string);
}

