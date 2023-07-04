#include "main.h"
#include <string.h>

/**
 * _strstr - strstr
 * @haystack: ha
 * @needle: green
 * Return: 0 1
 */

char *_strstr(char *haystack, char *needle)
{
char f[2];
f[0] = *needle;
f[1] = '\0';
   
int k = 0;

while (*needle)
{
k++;
if (*(_strpbrk(haystack, f) + k) == *(needle + k))
{
return (_strpbrk(haystack, f) + k - 1);
}
else
{
_strstr(_strpbrk(haystack, f) + k, needle);
}
}
return (NULL);
}
