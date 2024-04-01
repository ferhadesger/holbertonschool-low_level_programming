#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to the end of a list
 * @head: head of list
 * @str: string
 * Return: pointer to end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end = *head;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	if (str)
	{
		new_node->len = strlen(str);
		new_node->str = strdup(str);
	}

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (end->next)
		end = end->next;

	end->next = new_node;

	return (new_node);
}
