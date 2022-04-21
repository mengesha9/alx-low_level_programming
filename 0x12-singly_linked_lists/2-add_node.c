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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to list
 * @str: string with struct data
 * Return: list_t pointer.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = NULL;

	temp->next = *head;
	*head = temp;

	return (*head);
}

