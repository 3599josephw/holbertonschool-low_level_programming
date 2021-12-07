#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: the list
 * @index: the index
 * Return: nothing
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}

	return (current);
}
