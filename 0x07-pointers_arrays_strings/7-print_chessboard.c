#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - omega
 * @a: aaaa
 */

void print_chessboard(char (*a)[8])
{
int k, j;

for (k = 0; k < 8; k++)
{
for (j = 0; j < 8; j++)
{
putchar(a[k][j]);
}
putchar('\n');
}
}
