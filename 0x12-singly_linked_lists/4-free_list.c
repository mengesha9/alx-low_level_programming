#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: pointer to list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

