#include "main.h"

/**
 * more_numbers - ok
 */
void more_numbers(void)
{
int i, a;

for (i = 0; i <= 9; i++)
{
for (a = 0; a <= 14; a++)
{
if (a / 10 != 0)
_putchar(a  / 9 + 48);

_putchar(a % 10 + 48);
}
_putchar('\n');
}
}
