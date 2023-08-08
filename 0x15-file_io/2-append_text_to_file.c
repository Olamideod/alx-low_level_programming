#include "main.h"

/**
 * append_text_to_file - Appends the text to the end of a file,
 * @filename: Points to the names of each file name,
 * @text_content: The str to be added to the end of each file name.
 *
 * Return: If a function fails or filename is NULL return - -1.
 *         If file does not exist, the user  write permissions - -1.
 *         Then - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
