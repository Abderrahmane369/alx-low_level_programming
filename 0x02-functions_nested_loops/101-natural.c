#include "main.h"
#include <stdio.h>

/**
 * main - this dot
 * oztt - ee
 * Description: its an autotmata
 */

void oztt(void)
{
int k;
int sum = 0;

for (k = 0; k < 1024; k++)
{
if (k % 3 == 0 || k % 5 == 0)
{
sum += k;
}
}
printf("%d\n", sum);
}

int main(void)
{
oztt();

return (0);
}
