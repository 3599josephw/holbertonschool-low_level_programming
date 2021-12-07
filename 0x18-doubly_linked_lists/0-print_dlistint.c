#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}

	return (i);
}
