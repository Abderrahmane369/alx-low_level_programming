#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
 * _atoi - aezpd
 * @s: stgirng
 * Return: 0 if not
 */

int _atoi(char *s)
{
if (strcmp(s, "") != 0)
return (atoi(s));
else
return (0);
}
