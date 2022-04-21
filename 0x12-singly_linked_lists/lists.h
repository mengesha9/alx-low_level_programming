#ifndef LINKED_LISTS_HEADER
#define LINKED_LISTS_HEADER
/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/* prints all the elements of a list_t list */
size_t print_list(const list_t *h);
/* returns the number of elements in a linked list_t list */
size_t list_len(const list_t *h);
/* adds a new node at the beginning of a list_t list */
list_t *add_node(list_t **head, const char *str);
/* adds a new node at the end of a list_t list */
list_t *add_node_end(list_t **head, const char *str);
/* function that frees a list_t list */
void free_list(list_t *head);

#endif /* LINKED_LISTS_HEADER */

