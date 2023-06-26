#include "main.h"
#include <string.h>

/**
 * rev_string - ezaea
 * @s: ezae
 */

void rev_string(char *s)
{
unsigned long int k;

for (k = 0; k < strlen(s) / 2; k++)
{
char c = s[k];
s[k] = s[strlen(s) - k];
s[strlen(s) - k] = c;
}
putchar('\n');
}
