#include "lists.h"
/**
 * sum_listint - sum of all data of n
 * @head: pointer to the first node
 * Return: Sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
