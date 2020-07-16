#include "3-calc.h"

/**
  *op_add - addition
  *@a: int given
  *@b: int given
  *Return: int
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - substraction
  *@a: int given
  *@b: int given
  *Return: int
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiplication
  *@a: int given
  *@b: int given
  *Return: int
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - division
  *@a: int given
  *@b: int given
  *Return: int
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  *op_mod - modular operation
  *@a: int given
  *@b: int given
  *Return: int
  */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
