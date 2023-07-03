#include "main.h"
#include <string.h>

/**
 * _memset - meme
 * @s: s
 * @b: b
 * @n: n
 * Return: a 1 a 0
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return s;
}
