#include "lists.h"

/**
  *add_node - function that adds a node at the beggining of a list
  *@head: head of linked list
  *@str: element string of linked list
  *Return: the address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *str2;
	unsigned int length = 0;

	if (!str)
		return (NULL);

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	str2 = strdup(str);

	if (!str2)
	{
		free(node);
		return (NULL);
	}

	while (str2[length])
		length++;

	node->str = str2;
	node->len = length;

	if (!head || !(*head))
		node->next = NULL;

	else
		node->next = *head;

	*head = node;

	return (node);
}
