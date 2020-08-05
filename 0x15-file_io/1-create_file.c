#include "holberton.h"

/**
 *create_file - function that creates a file
 *@filename: is the name of the file to create
 *@text_content: is a NULL terminated string to write to the file
 *Return: -1 or 1
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, count;

	count = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op < 0)
		return (-1);

	while (text_content[count])
		count++;

	wr = write(op, text_content, count);

	if (wr < 0)
	{
		close(op);
		return (-1);
	}
	close(op);

	return (1);
}
