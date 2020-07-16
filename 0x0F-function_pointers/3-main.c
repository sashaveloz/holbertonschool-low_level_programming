#include "3-calc.h"

/**
  *main - main function for calc
  *@argc: number of parameters
  *@argv: **
  *Return: int
  */

int main(int argc, char **argv)
{
	int (*op_func)(int, int);
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
