#include "lists.h"
/**
 * free_listint - function that free a list
 * @head: pointer to the first node
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
