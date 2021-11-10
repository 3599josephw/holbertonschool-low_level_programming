#include "lists.h"
/**
 * sum_listint - returns sum of all data in the list
 * @head: the list
 * Return: nothing
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
