#include "lists.h"

/**
  *listint_len - function that returns the number of elements in list
  *@h: structure elements
  *Return: n of elemens
  */

size_t listint_len(const listint_t *h)
{
	return (h->n);
}
