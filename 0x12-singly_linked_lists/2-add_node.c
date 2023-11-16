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
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;
	else
		new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
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
