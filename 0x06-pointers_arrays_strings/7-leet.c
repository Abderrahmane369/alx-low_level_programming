#include "main.h"
#include <string.h>

/**
 * leet - opo
 * @str: eeepoee
 * Return: 1 and 0
 */

char *leet(char *str)
{
unsigned long int k;
int i;

char a[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
char l[] = {'4', '3', '0', '7', '1'};

for (k = 0; k < strlen(str); k++)
{
for (i = 0; i < 10; i++)
{
if (str[k] == a[i])
{
str[k] = l[i % 5];
}
}
}

return (str);
}
