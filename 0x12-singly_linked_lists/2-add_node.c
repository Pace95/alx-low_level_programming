#include "lists.h"
int len(const char *str);
/**
 * add_node - addition of new first node
 * @head: the first node
 * @str: string
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
		newnode->str = strdup(str);
		newnode->len = len(str);
		*head = newnode;
	return (*head);
}

/**
 * len - length of string
 * @str: string
 * Return: lenght of string
 */
int len(const char *str)
{
	int x;

	if (str == NULL)
		return (0);
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
