#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - eza
 * @argc: eza
 * @argv: eza
 * Return : eza
 */

int main(int argc, char **argv)
{
	int f, t;
	char *buff;
	ssize_t rbytes, wbytes;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f = open(argv[1], O_RDONLY);
	t = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (f == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (t == - 1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buff = malloc(sizeof(1024));

	if (!buff)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file%s\n", argv[1]);
		exit(99);
	}

	rbytes = read(f, buff, 1024);

	buff[rbytes] = '\0';

	if (rbytes == -1)
	{
		free(buff);
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
	}
	
	wbytes = write(t, buff, rbytes);
	
	if (wbytes == -1 || wbytes != rbytes)
	{
		free(buff);
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(f);
	close(t);
	free(buff);

	return (0);
}
