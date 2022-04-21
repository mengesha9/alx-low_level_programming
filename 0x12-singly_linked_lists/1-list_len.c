#include <stdio.h>
#include "lists.h"

/**
 * list_len - finds number of elements of a list_t list
 * @h: pointer to list
 * Return: size_t count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

