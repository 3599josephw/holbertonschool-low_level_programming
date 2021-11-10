#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index
 * @head: the list
 * @idx: the index
 * @n: data to be inserted
 * Return: address to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *prev;
	listint_t *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	while (i < (idx - 1))
	{
		current = current->next;
		i++;
	}
	prev = current;
	current = current->next;

	prev->next = new_node;

	new_node->n = n;
	new_node->next = current;

	return (new_node);
}
