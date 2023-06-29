#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - topeir
 * @a: ss
 * Return: t 1 AOR 0
 */

char *string_toupper(char *a)
{
int k;

for (k = 0; k < strlen(a); k++)
{
a[k] = 'a';
}

return (a);
}
