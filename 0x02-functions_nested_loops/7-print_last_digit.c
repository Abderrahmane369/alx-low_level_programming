#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - hiya wahed lfunctionse
 * @n: hiyac wlahrt fojnction
 * Return: 0 ila kannt 1 hh
 */

int print_last_digit(int n)
{
if (n >= 0)
return ((n % 10) * 11);
else
return (-(n % 10) * 11);
}
