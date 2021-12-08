#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: the list
 * @index: the index
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *past, *future;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		else
		{
			current = (*head)->next, current->prev = NULL, free(*head);
			*head = current;
			return (1);
		}
	}
	while (i < (index - 1))
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	/* let index = 1, past is set to 0th, current goes to 1, future is 2 */
	past = current;
	current = current->next;
	future = current->next;

	past->next = future;
	if (current->next != NULL)
		future->prev = past;

	free(current);

	return (1);
}
