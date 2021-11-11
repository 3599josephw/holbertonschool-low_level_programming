#include "lists.h"
/**
 * pop_listint - free list
 * @head: the list
 * Return: nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i = (*head)->n;

	if (*head == NULL)
		return (0);

	current = (*head)->next;
	free(*head);
	*head = current;

	return (i);
}
