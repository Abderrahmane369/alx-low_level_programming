#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    unsigned long int n;

    printf("%lu\n", ULONG_MAX);
    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = ULONG_MAX;
    set_bit(&n, UINT_MAX);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
