#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list
 *@head: head of linked list
 *@str: element string of linked list
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *current;
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
		*head = node;

	else
	{
		current = *head;
		for (; current->next; current = current->next)
			;
		current->next = node;
	}
	return (node);

}
