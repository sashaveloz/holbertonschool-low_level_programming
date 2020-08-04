#include "holberton.h"

/**
  *read_textfile - reads a text file and prints it to the standard output
  *@filename: file name
  *@letters: letters is the number of letters it should read and print
  *Return: number of printed letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, wr;
	ssize_t lett;
	char *rd = NULL;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = malloc(sizeof(char) * letters);

	if (!rd)
	{
		close(op);
		free(rd);
		return (0);
	}
	if (op < 0)
		return (0);

	lett = read(op, rd, letters);

	if (lett < 0)
	{
		close(op);
		free(rd);
		return (0);
	}
	wr = write(STDOUT_FILENO, rd, lett);

	if (wr < 0)
	{
		close(op);
		free(rd);
		return (0);
	}
	close(op);
	free(rd);
	return (lett);
}
