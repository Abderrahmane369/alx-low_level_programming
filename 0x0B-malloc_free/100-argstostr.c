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
	char *n = "\n";
	int k;
	unsigned int len = 0;

	if (ac <= 1 || av == NULL)
		return (NULL);

	for (k = 1; k < ac; k++)
	{
		len += strlen(av[k]);
	}

	s = malloc(sizeof(char) * (len));

	if (s == NULL)
		return (NULL);

	strcpy(s, av[1]);

	for (k = 2; k < ac; k++)
	{
		strcat(s, av[k]);
		strcat(s, n);
	}

	return (s);


}
