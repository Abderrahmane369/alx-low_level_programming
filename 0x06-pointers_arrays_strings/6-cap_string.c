#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - ezaea
 * @a: aaaaaaaaa
 * Return: deistrub 0 and 1
 */

char *cap_string(char *a)
{
unsigned long int k;

for (k = 0; k < strlen(a); k++)
{
if (a[k] == ',' || a[k] == ';' || a[k] == '.' || a[k] == '!' || a[k] == '?' || a[k] == '"' || a[k] == '(' || a[k] == ')' || a[k] == '{' || a[k] == '}')
{
a[k + 2] = toupper(a[k + 2]);
}
}

return (a);
}
