#include "lists.h"
/**
 * delete_dnodeint_at_index - gets node at index
 * @head: the list
 * @index: the index
 * Return: nothing
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev, *future;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	while (i < (index - 1))
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	prev = current;
	current = current->next;
	future = current->next;
	prev->next = future;
	free(current);

	return (1);
}
