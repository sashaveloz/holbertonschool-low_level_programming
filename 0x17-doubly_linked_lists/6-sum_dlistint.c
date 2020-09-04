#include "lists.h"

/**
 *sum_dlistint - Returns the sum of all the data (n) of a list
 *@head: pointer to the head of the list
 *Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr_h;

	ptr_h = head;

	while (ptr_h)
	{
		sum += ptr_h->n;
		ptr_h = ptr_h->next;
	}
	return (sum);
}
