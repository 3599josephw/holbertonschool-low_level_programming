#include "lists.h"
/**
 * get_nodeint_at_index - gets node at index
 * @head: the list
 * @index: the index
 * Return: nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
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
