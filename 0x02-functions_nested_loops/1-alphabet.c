#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: YeseaY
 * Return: 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int i;
for (i = 0; i < 26; i++)
{
putchar(97 + i);
}
putchar('\n');
}