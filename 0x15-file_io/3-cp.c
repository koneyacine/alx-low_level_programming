#include "main.h"
#include <errno.h>

#define USAGE_FORMAT "Usage: cp file_from file_to\n"
#define ERR_NOREAD_FORMAT "Erorr: Can't read from file %s\n"
#define ERR_NOWRITE_FORMAT "Error: Can't write to %s\n"
#define ERR_NOCLOSE_FORMAT "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
 */

int main(int ac, char **av)
{
int from_fd, to_fd;
ssize_t bytes_read, bytes_written;
char buffer[READ_BUF_SIZE];
if (ac != 3)
	dprintf(STDERR_FILENO, USAGE_FORMAT);
	return (EXIT_FAILURE);

from_fd = open(av[1], O_RDONLY);
if (from_fd == -1)
	dprintf(STDERR_FILENO, ERR_NOREAD_FORMAT, av[1]);
	return (EXIT_FAILURE);

to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to_fd == -1)
	dprintf(STDERR_FILENO, ERR_NOWRITE_FORMAT, av[2]);
	close(from_fd);
	return (EXIT_FAILURE);

while ((bytes_read = read(from_fd, buffer, READ_BUF_SIZE)) > 0)
	bytes_written = write(to_fd, buffer, bytes_read);
	if (bytes_written != bytes_read)
		dprintf(STDERR_FILENO, ERR_NOWRITE_FORMAT, av[2]);
		close(from_fd);
		close(to_fd);
		return (EXIT_FAILURE);

	if (bytes_read == -1)

		dprintf(STDERR_FILENO, ERR_NOREAD_FORMAT, av[1]);
		close(from_fd);
		close(to_fd);
		return (EXIT_FAILURE);

if (close(from_fd) == -1 || close(to_fd) == -1)
{
dprintf(STDERR_FILENO, ERR_NOCLOSE_FORMAT, errno);
return (EXIT_FAILURE);
}
return (EXIT_SUCCESS);
}
