#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: first node pointer
 * Return: elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);
	for (x = 1; h->next != NULL; x++)
		h = h->next;
	return (x);
}
