#include "holberton.h"

/**
  *primos - Evaluates if a number is prime
  *@x: integer
  *@n: integer
  *Return: int
  */

int primos(int x, int n)
{
	if (x % n == 0)
	{
		return (0);
	}
	if (n < x)
	{
		return (1);
	}
	return (primos(x + 1, n));
}

/**
  *is_prime_number - Determinates if n given number is prime
  *@n: integer
  * Return: int
  */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	return (primos(n, 2));
}
