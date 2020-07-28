#include "lists.h"

/**
  *sum_listint - returns the sum of all the data of a listint_t list
  *@head: elemepent of a list
  *Return: int
  */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr_h;

	ptr_h = head;

	sum = 0;
	while (ptr_h)
	{
		sum += ptr_h->n;
		ptr_h = ptr_h->next;
	}
	return (sum);
}
