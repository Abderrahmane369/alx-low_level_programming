#include "main.h"
#include <string.h>

/**
 * rev_string - ezaea
 * @s: ezae
 */

void rev_string(char *s)
{
char *str = "HOW ARE";
char rstr[strlen(str) + 1];

unsigned long int k;

for (k = 0; k < strlen(str); k++)
{
rstr[k] = str[strlen(str) - 1 - k];
}
}
