#include "lists.h"
/**
 * add_node_end - returns number of elements in a linked list
 * @head: beginning of list
 * @str: data for node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	last = *head;

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
