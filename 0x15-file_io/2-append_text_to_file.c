#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *@filename: name of the file
 *@text_content: is the NULL terminated string to add at the end of the file
 *Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, count;

	count = 0;
	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	op = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);

	if (op < 0)
		return (-1);

	while (text_content[count])
		count++;

	wr = write(op, text_content, count++);

	if (wr < 0)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
