#include "lists.h"
/**
 * print_listint - print all elements of a list
 * @h: pointer to first list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
