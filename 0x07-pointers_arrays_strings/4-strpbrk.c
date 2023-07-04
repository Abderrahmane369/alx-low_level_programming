#include <string.h>
#include "main.h"

/**
 * _strpbrk - hello
 * @s: s
 * @accept: apc
 * Return: 0 , 1
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return s;
}
a++;
}
s++;
}
return (NULL);
}
