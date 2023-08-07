#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fnct1>

/**
 * read_textfile - eza
 * @filename: eza
 * @letters: eza
 * Return: eza
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE* f;
	char buff[letters];
	ssize_t rbytes, wbytes;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	rbytes = read(f, buff, sizeof(buff));

	if (rbytes == -1)
	{
		close(f);
		return (0);
	}

	wbytes = write(STDOUT_FILENO, buff, rbytes);

	if (wbytes != rbytes || wbytes == -1)
	{
		close(f);
		return (0);
	}

	return (rbytes);
}
