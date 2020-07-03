#include "holberton.h"

/**
  * raiz - function that calculates square root of number
  *
  *@y: counter
  *@n: number
  *
  *Return: int
  */

int raiz(int y, int n)
{
	if (y * y == n)
	{
		return (y);
	}

	if (y * y > n)
	{
		return (-1);
	}

	return (raiz(y + 1, n));

}

/**
  *_sqrt_recursion - returns the natural square root of a number
  * Return: int
  * @n: number
  */

int _sqrt_recursion(int n)
{
	return (raiz(0, n));
}
