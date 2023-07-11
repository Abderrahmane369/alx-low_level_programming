#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * argstostr - aze
 * @ac: eaz
 * @av: eza
 * Return: aze
 */

char *argstostr(int ac, char **av)
{
char *s;
int k;
unsigned int len = 0;

if (ac == 0|| av == NULL)
return (NULL);

for (k = 0; k < ac; k++)
{	
len += strlen(av[k]);
}

s = malloc(sizeof(char) * (len + ac + 1));

if (s == NULL)
return (NULL);

strcpy(s, av[0]);

for (k = 1; k < ac; k++)
{
strcat(s, "\n");
strcat(s, av[k]);
}
strcat(s, "\n");

return (s);
}
