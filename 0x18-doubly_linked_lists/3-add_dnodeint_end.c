#include "lists.h"
/**
 * add_dnodeint_end - returns number of elements in a linked list
 * @head: beginning of list
 * @n: data for node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);


	last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
