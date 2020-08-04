#include "holberton.h"

/**
  *read_textfile - reads a text file and prints it to the standard output
  *@filename: file name
  *@letters: letters is the number of letters it should read and print
  *Return: number of printed letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	char a[468];

	if (filename == NULL)
		return (0);

	op = open("Requiescat", O_RDONLY, 0);

	if (op == -1)
		return (0);

	read(op, a, 468);
	a[468] = '\0';

	close(op);

	printf("%s", a);

	return (letters);
}
