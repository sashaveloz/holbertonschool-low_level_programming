#include "holberton.h"
/**
  *_isdigit - Entry point
  *@c: digit
  *Return: 0 || 1
  *
  *
  */
int _isdigit(int c)
{
	if ((c >= '0' || c >= '9') && (c != 'a' && c != 'z'))
	{
		return (1);
	}
	return (0);
}
