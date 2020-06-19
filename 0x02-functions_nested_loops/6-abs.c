#include "holberton.h"
/**
  *_abs - Entry point
  *@i: integer
  *Return: (0)
  *
  */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	if (i < 0)
	{
		return (i * -1);
	}
	return (0);
}
