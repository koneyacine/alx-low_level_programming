#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written = 0;
if (!filename)
	return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (fd == -1)
	return (-1);

if (text_content)
{
ssize_t len = 0;
while (text_content[len])
	len++;

bytes_written = write(fd, text_content, len);
}

close(fd);

return (bytes_written != -1 ? 1 : -1);
}
