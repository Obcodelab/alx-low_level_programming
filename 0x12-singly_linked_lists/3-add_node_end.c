#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: the string
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to a linked list
 * @str: the string
 *
 * Return: the address of new element
 */

list_t *add_node_end(list_t **head, const char *str);
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->i = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
