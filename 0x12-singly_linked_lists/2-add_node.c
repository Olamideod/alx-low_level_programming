#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Functions that adds the new node at the starting of a list,
 * @head: Points to singly linked list,
 * @str: Points to signly linked lis,
 *
 * stings need a duplicate.
 * Allowed to use strdup.
 *
 * Return: The address of new element or NULL if it fails.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	/* if it fails return NULL */
	if (new_node == NULL)
		return (NULL);
	/* loop through the str to find length */
	while (str[length])
		length++;
	/* access the length of new_node and assign it to length */
	new_node->len = length;
	/* access the list of a new_node and duplicate it */
	new_node->str = strdup(str);
	/* access the next node of new_node and assign it as the first node */
	new_node->next = *head;
	/* make the beginning of the list */
	*head = new_node;
	/* return  */
	return (new_node);
}
