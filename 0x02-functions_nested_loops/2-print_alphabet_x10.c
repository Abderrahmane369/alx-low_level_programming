#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print
 */

void print_alphabet_x10(void)
{
int i;
int j = 0;

while (j < 10)
{
j++;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
