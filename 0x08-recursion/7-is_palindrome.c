#include "holberton.h"

/**
  * length - evaluates the lenght of a string
  *@s: string *
  *Return: lenght of a string
  */

int length(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		return (length(s + 1) + l);
	}
	return (l);
}

/**
  *compare - compare two strings
  *@i: number
  *@l: counter
  *@s: string *
  *Return: int
  */

int compare(int i, int l, char *s)
{
	if (i >= l)
	{
		return (1);
	}
	else if (s[i] == s[l])
	{
		return (compare(i + 1, l - 1, s));
	}
	else
		return (0);
}

/**
  * is_palindrome - evaluates if a string is palindrome
  *@s: string *
  *
  * Return: 0 o 1
  */

int is_palindrome(char *s)
{
	int l = length(s);
	int i = 0;

	return (compare(i, l - 1, s));
}
