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
	if ((c >= 'A' || c >= 'Z') && (c != 'a' && c != 'z'))
	{
		return (1);
	}
	return (0);
}
