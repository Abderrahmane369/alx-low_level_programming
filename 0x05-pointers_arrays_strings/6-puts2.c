#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - iazep
 * @str: eaeeza
 */

void puts2(char *str)
{
unsigned long int k;

for (k = 0; k < strlen(str); k++)
{
if (k % 2 == 0)
{
putchar(str[k]);
}
}
putchar('\n');
}
