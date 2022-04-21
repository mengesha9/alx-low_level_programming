#include <stdio.h>
#include "lists.h"

/**
 * _strlen - counts string length
 * @str: string
 * Return: length
 */

int _strlen(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list
 * @str: string with struct data
 * Return: list_t pointer.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *traverse, *new_node;

	traverse = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = new_node;
	}

	return (*head);
}

