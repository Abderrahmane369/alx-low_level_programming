#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - ezaea
 * @str: aaaaaaaaa
 * Return: deistrub 0 and 1
 */
char *cap_string(char *str)
{
int capitalizeNext = 1;
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (capitalizeNext && islower(str[i]))
{
str[i] = toupper(str[i]);
}
capitalizeNext = 0;

switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
capitalizeNext = 1;
break;
}
}

return (str);
}
