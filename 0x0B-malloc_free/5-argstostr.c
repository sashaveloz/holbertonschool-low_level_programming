#include "holberton.h"

/**
  *argstostr -  function that concatenates all the arguments of your program.
  *@ac: int
  *@av: char **
  *
  *
  *Return: * or NULL
  */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	n = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			n++;
			j++;
		}
	}

	ptr = malloc(sizeof(char) * ac + n + 1);

	if (ptr == '\0')
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = 0;
	return (ptr);
}
