#include "main.h"
#include <string.h>

/**
 * print_rev - rezad
 * @s: eeazea
 */

void print_rev(char *s)
{
unsigned long int k;

for (k = 0; k < strlen(s); k++)
{
putchar(*(s + strlen(s) - (1 + k)));
}
putchar('\n');
}
