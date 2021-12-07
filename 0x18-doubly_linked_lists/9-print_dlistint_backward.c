#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list backwards
 * @h: the list
 * Return: number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 1;

	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}

	return (i);
}
