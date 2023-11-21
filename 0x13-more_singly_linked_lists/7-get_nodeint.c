#include "lists.h"
/**
 * get_nodeint_at_index - function that returns nth node
 * @head: pointer to the first node
 * @index: index of the node
 * Return: requested node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
