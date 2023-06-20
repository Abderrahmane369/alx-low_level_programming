#include "main.h"

/**
 * print_alphabet - prints all aphabet in lowercase
 */

void print_alphabet(void)
{
int i;
for (i = 0; i < 26; i++)
{
_putchar(97 + i);
}
_putchar('\n');
}
