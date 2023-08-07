#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - eza
 * @filename: eaz
 * @text_content: eza
 * Return: eza
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	char *txt = text_content ? text_content : "";

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (f == -1)
		return (-1);

	while (*txt)
	{
		if (write(f, txt, 1) == -1)
		{
			close(f);
			return (-1);
		}

		txt++;
	}

	close(f);
	return (1);
}
