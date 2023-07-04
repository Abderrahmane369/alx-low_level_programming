#include "main.h"
#include <string.h>

/**
 * _strchr - op
 * @s: s,
 * @c: c
 * Return: 0 1
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);

s++;
}

return (NULL);
}
