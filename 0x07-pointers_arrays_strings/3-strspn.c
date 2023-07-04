#include "main.h"
#include <string.h>

/**
 * _strspn - opi
 * @s: osp
 * @accept: accept
 * Return: 0 1
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int k = 0;

while (*s != ' ')
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
k++;
break;
}
a++;
}
s++;
}

return (k);
}
