#include "main.h"
#include <stdio.h>
/**
 * times_table - hieheieei
 */

void print_times_table(int n)
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j != 0)
printf("%2d", i * j);
else
printf("0");

if (j != n)
printf(", ");
}
printf("\n");
}
}
