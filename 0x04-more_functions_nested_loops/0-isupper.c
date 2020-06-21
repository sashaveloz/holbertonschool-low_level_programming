#include "holberton.h"
/**
  *_isupper - Entry point
  *@c: character
  *Return: (0 || 1)
  *
  *
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	return (0);
}
