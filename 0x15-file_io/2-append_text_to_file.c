#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, ch;

	if (!filename)
		return (-1);
	if (filename && !text_content)
		return (1);
	if (!filename && !text_content)
		return (-1);
	fd = popen(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	ch = write(fd, text_content, len);
	if (ch == -1)
		return (-1);
	close(fd);
	return (1);
}
