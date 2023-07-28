#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function that adds new node to the end list.
 * @head: Points to a singly linked list.
 * @str: Points to a signly linked list.
 *
 * strings need to be duplicated.
 * Allowed to use strdup.
 *
 * Return: Address of the new element or NULL if it fails.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	/* if it fails returb NULL */
	if (new_node == NULL)
		return (NULL);
	/* loop through the string to find length */
	while (str[length])
		length++;
	/* access the length of new_node and assign it to length */
	new_node->len = length;
	/* access the list of new_node and duplicate it */
	new_node->str = strdup(str);
	/* if there is no head/linked list make new_node as head */
	if (*head == NULL)
	{
		new_node->next = *head; /*this step isn't needed really */
		*head = new_node;
	}
	else
	{	/**
		 * the new node is going to be the last node so make next,
		 * of it as NULL
		 */
		new_node->next = NULL;
		last = *head;
		/* traverse till last node */
		while (last->next)
			last = last->next;
		/* change the next of last node */
		last->next = new_node;
	}
	return (new_node);
}
