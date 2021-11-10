#include "lists.h"
/**
 * free_listint2 - free list
 * @head: the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
