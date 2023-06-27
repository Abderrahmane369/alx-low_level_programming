#include "main.h"
#include <stdio.h>
#include <string.h>

/** puts_half - eeaea
 * @str: opo
 */

void puts_half(char *str)
{
unsigned long int k;

for (k = 0; k < strlen(str); k++)
{
if (strlen(str) % 2 == 0)
{
if (k >= strlen(str) / 2)
putchar(str[k]);
}
else {
if (k >= (strlen(str) - 1) / 2)
putchar(str[k]);
}
}
putchar('\n');
}
