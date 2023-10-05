#include "hash_tables.h"

/**
 * strdup - dup str
 * @str: st
 * Return: sd
 */

char *strdup(const char *str)
{
char *s = malloc(strlen(str) + 1);
if (!s)
{
return (NULL);
}
strcpy(s, str);
return (s);
}
