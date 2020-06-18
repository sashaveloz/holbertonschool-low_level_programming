#include "holberton.h"

/**
 *_islower - Entry point
 *Print lower case character
 *Return: (0 || 1)
 * @c: variable tipo character
 */
int _islower(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	return (0);
}
