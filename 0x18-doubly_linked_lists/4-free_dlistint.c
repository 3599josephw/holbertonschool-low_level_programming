#include "lists.h"
/**
 * free_dlistint - free list
 * @head: the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}

}
