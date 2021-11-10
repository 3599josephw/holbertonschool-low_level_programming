#include "lists.h"
/**
 * add_nodeint - adds a node the the beginning of a linked list
 * @head: beginning of list
 * @n: data for the list
 * Return: address for new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
