#include "main.h"
#include <stdio.h>
/**
 * times_table - hieheieei
 */

void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
printf("%d, ", j * i);
}
printf("\n");
}
}
