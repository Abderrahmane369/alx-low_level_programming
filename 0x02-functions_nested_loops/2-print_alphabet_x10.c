#include <stdio.h>
#include "main.h"

/**
 * print_alphabets_x10 - IT PREINTN
 */

void print_alphabet_x10(void)
{
int i;
int j = 0;

while (j < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_purchar('\n');
}
