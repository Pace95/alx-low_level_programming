#include "lists.h"
/**
 * pop_listint - function that deletes amd return head notes as n
 * @head: pointer to the first node
 * Return: head node as n or 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
