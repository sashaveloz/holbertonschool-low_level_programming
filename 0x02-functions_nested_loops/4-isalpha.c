#include "holberton.h"
/**
  *_isalpha - Entry point
  * Print lower and upper case character
  *@c: variable tipo character
  *Return: (0 || 1)
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') && (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	return (0);
}
