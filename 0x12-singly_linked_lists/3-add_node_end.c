#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - add new node at the end
 * @head: the pointer to first node
 * @str: string
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}
/**
 * create_node - function that creates node
 * @str: string observed
 * Return: pointer to node
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - lenght of string
 * @str: string observed
 * Return: length
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
