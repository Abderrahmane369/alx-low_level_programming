#include "main.h"
#include <stdio.h>

/**
 * main - this dot
 * Description: its an autotmata
 */

void print_times_table()
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
print_times_table();

return (0);
}
