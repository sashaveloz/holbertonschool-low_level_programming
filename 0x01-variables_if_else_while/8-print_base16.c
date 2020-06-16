#include <stdio.h>

/**
  *main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char h;

	h = 48;

	while (h <= 102)
	{
		putchar(h);
		h++;
		if (h == 58)
			h = 97;
	}
	putchar('\n');
	return (0);
}
